#include<iostream>
using namespace std;

void displayarr(int arr[], int size);
void mergesort(int arr[],int l,int r);
void merge(int arr[],int l, int mid, int r);


int main(){
	int arr[7]={34,5435,53,3,34,23,345},size;
	size=sizeof(arr)/sizeof(arr[0]);
	cout<<"the given array";
	displayarr(arr,size);
	int first=0;
	mergesort(arr,first,size-1);
	cout<<endl<<"the sorted array"<<endl;
	displayarr(arr,size);
	
	return 0;
}
void mergesort(int arr[],int l,int r){
	if(l<r){
	    int mid= l + (r - l) / 2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}
void merge(int arr[],int l, int mid, int r){
	int i,j,k;
	int L2=r-mid;
	int L1=mid-l+1;
	int larr[L1],rarr[L2];
	for(i=0;i<L1;i++)larr[i]=arr[l+i];
	for(j=0;j<L1;j++)larr[j]=arr[mid+1+j];
	i=0;
	j=0;
	k=l;
	while(i<L1 && j<L2){
		if(larr[i] <= rarr[j]){
			arr[k]=larr[i];
			i++;
		}
		else{
			arr[k]=larr[j];
			j++;
		}
		k++;
	}
	while(i<L1){
	arr[k]=larr[i];
	i++;
	k++;
}
	while(j<L2){
	arr[k]=rarr[j];
	j++;
	k++;
	}
}
void displayarr(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
