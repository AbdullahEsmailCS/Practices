#include<iostream>
using namespace std;

void InsertionSort(int a[],int n){
	for(int i=1;i<n;i++){
		int key=a[i];
		int j=i-1;
		while (j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}

void DisplayElement(int ar[],int size){
	cout<<" Elements of an array: ";
	for( int i=0;i<size;i++)
	cout<<ar[i]<<" ";
}

int main(){
	
	int a[]={10,2,3,5,6};
	int n=sizeof(a)/sizeof(a[0]);
	InsertionSort(a,n);
	DisplayElement(a,n);
	
	return 0;
}
