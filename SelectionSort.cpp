#include<iostream>
using namespace std;

/*
Design Approach: 
Best Case:
Average case:
Worst Case:

*/

//***********start***********************************
void SelectionSort(int a[], int size){
	for(int i=0;i<size-1;i++){
		int min=i;
		for(int j=i+1;j<size;j++){
			if( a[j]<a[min])
			min=j;
		}
		if(min !=0){
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}
//*************end*********************************
void DisplayElement(int ar[],int size){
	cout<<" Elements of an array: ";
	for( int i=0;i<size;i++)
	cout<<ar[i]<<" ";
}
int main(){
		int a[]={10,2,3,5,6};
	int n=sizeof(a)/sizeof(a[0]);
	SelectionSort(a,n);
	DisplayElement(a,n);
	
	return 0;
}
