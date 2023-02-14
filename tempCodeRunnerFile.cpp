#include <stdio.h>
#include <conio.h>
void printarr(int arr[], int size);
void maxheap(int arr[], int walker,int size);
void rebmaxheap(int arr[], int low, int high);
int main()
{
    int arr[50];
    int size;
    int swap;
    int high;
    int low = 0;

    printf("Enter the size of array:\n");
    scanf("%d", &size);
    high = size - 1;
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int walker = 1;
    for(int walker=1;walker<=size;walker++){
        maxheap(arr, walker, size);
        
    }

   // rebmaxheap(arr, low, high);
    printarr(arr, size);
    return 0;
}
void maxheap(int arr[], int walker, int size)
{
    int swap;
    int tem=size-walker;
    if (tem!= size-1)
    {
        int parent;
        parent = walker  / 2;
        if (arr[parent] < arr[tem])
        {
            swap = arr[parent];
            arr[parent] = arr[walker];
            arr[walker] = swap;
            // walker++;
        }
    }
}

/**void rebmaxheap(int arr[], int low, int high)
{
    int swap;
    int index;
    int lc = 2 * low + 1;
    int rc = 2 * low + 1;
    while (low < high)
    {
        swap = arr[low];
        arr[low] = arr[high];
        arr[high] = swap;
        high--;
    }

    if (lc >= rc)
    {
        index = lc;
    }
    if (lc < rc)
    {
        index = rc;
    }
    if (index!=low && arr[index] < arr[high])
    {
        swap = arr[low];
        arr[low] = arr[index];
        arr[index] = swap;
    }
    rebmaxheap(arr,index,high);
}**/
void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}