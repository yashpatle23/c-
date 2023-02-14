#include<stdio.h>
#include<conio.h>
void displayarr(int arr[],int size);
void mergesort(int arr[],int l,int r);
void merge(int arr[],int l,int mid,int r);

int main()
{
    int first=0,arr[7]={22,4,55,7,85,6,95},size;

	size=sizeof(arr)/sizeof(arr[0]);
	printf("The given array:");
    displayarr(arr,size);
	mergesort(arr,first,size-1);
	printf("\nThe sorted array:\n");
	displayarr(arr,size);

	return 0;


}
void mergesort(int arr[],int l,int r)
{
    int mid;
    if(l<r)
    {
         mid=l+(r-1)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,l);
        merge(arr,mid,l,r);
    }
}

void merge(int arr[],int l, int mid, int r){
	int i,j,k;
	int L2=r-mid;
	int L1=mid-l+1;
	int larr[L1],rarr[L2];
	for(i=0;i<L1;i++){
            larr[i]=arr[l+i];
	}
	for(j=0;j<L2;j++)
    {
        rarr[j]=arr[mid+1+j];
	}
	i=0;
	j=0;
	k=l;
	while(i<L1 && j<L2){
		if(larr[i] <= rarr[j]){
			arr[k]=larr[i];
			i++;
		}
		else{
			arr[k]=rarr[j];
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
void displayarr(int arr[],int size)
{

	for(int i=0;i<size;i++){
		printf("%d",arr[i]);

   }
}
