#include <iostream>
#include <Windows.h>

// Custom implementation of IUnknown interface
class MyUnknown : public IUnknown
{
private:
    ULONG refCount_;

public:
    MyUnknown() : refCount_(1) {}

    // IUnknown methods
    STDMETHODIMP QueryInterface(REFIID riid, void** ppvObject)
    {
        if (riid == IID_IUnknown)
        {
            *ppvObject = static_cast<IUnknown*>(this);
        }
        else
        {
            *ppvObject = nullptr;
            return E_NOINTERFACE;
        }

        AddRef();
        return S_OK;
    }

    STDMETHODIMP_(ULONG) AddRef()
    {
        return InterlockedIncrement(&refCount_);
    }

    STDMETHODIMP_(ULONG) Release()
    {
        ULONG newRefCount = InterlockedDecrement(&refCount_);
        if (newRefCount == 0)
        {
            delete this;
        }
        return newRefCount;
    }
};

// Custom implementation of IDispatch interface
class MyDispatch : public IDispatch
{
private:
    ULONG refCount_;

public:
    MyDispatch() : refCount_(1) {}

    // IDispatch methods
    STDMETHODIMP QueryInterface(REFIID riid, void** ppvObject)
    {
        if (riid == IID_IUnknown || riid == IID_IDispatch)
        {
            *ppvObject = static_cast<IDispatch*>(this);
        }
        else
        {
            *ppvObject = nullptr;
            return E_NOINTERFACE;
        }

        AddRef();
        return S_OK;
    }

    STDMETHODIMP_(ULONG) AddRef()
    {
        return InterlockedIncrement(&refCount_);
    }

    STDMETHODIMP_(ULONG) Release()
    {
        ULONG newRefCount = InterlockedDecrement(&refCount_);
        if (newRefCount == 0)
        {
            delete this;
        }
        return newRefCount;
    }

    STDMETHODIMP GetTypeInfoCount(UINT* pctinfo)
    {
        *pctinfo = 0;
        return S_OK;
    }

    STDMETHODIMP GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo** ppTInfo)
    {
        return E_NOTIMPL;
    }

    STDMETHODIMP GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames,
        LCID lcid, DISPID* rgDispId)
    {
        return E_NOTIMPL;
    }

    STDMETHODIMP Invoke(DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags,
        DISPPARAMS* pDispParams, VARIANT* pVarResult,
        EXCEPINFO* pExcepInfo, UINT* puArgErr)
    {
        // Log the method invocation
        std::cout << "Method invoked: " << dispIdMember << std::endl;

        return S_OK;
    }
};

int main()
{
    // Create an instance of the custom COM object
    MyUnknown* myUnknown = new MyUnknown();

    // Query for IDispatch interface
    IDispatch* dispatch;
    if (SUCCEEDED(myUnknown->QueryInterface(IID_IDispatch, (void**)&dispatch)))
    {
        // Invoke a method on the COM object
        DISPPARAMS params = { nullptr, nullptr, 0, 0 };
        VARIANT result;
        EXCEPINFO excepInfo;
        UINT argErr;
        dispatch->Invoke(0, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD,
            &params, &result, &excepInfo, &argErr);

        // Release the IDispatch interface
        dispatch->Release();
    }

    // Release the IUnknown interface
    myUnknown->Release();

    return 0;
}