#include<stdio.h>
#include<conio.h>
void maxheap(int arr[], int walker);
int main(){
    int arr[50];
    int size;
    int swap;
    int walker=0;
    printf("Enter the size of array:\n");
    scanf("%d", &size);
    int high = size - 1;
    int low = 0;
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    maxheap(arr, walker, size);
    return 0;
}
void maxheap (int arr[], int walker){

}