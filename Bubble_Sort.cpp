#include<iostream>
using namespace std;

/*
Design Approach: 
Best Case:
Average case:
Worst Case:

*/

void BubbleSort(int a[], int n){
	for(int i=0;i<n-1;i++){
		int flag=0;
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=0;
			}
		}
		if(flag==0)
		break;
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
	BubbleSort(a,n);
	DisplayElement(a,n);
	return 0;
}
