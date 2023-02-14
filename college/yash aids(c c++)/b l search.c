#include<stdio.h>
#include<conio.h>

int linearSearch(int arr[], int x,int size){
    int i;
    for(i=0;i<size; i++){
        if(arr[i]==x)break;
    }
    return i;

}
int main(){
    int arr[20];
    int size,x,low=0,high,tem;
    printf("enter the size of array");
    scanf("%d",&size);
    high=size-1;
    printf("enter the elemaent of array\n");
    for(int i=0;i<size;i++)scanf("%d",&arr[i]);
    printf("enter the no. you want to search");
    scanf("%d",&x);
    tem=linearSearch(arr,x,size);
    if(tem==size)printf("no. not found");
    else printf("%d is in positon of %d ",x,tem+1 );
    return 0;
}
