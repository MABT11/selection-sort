#include <stdio.h>
#define SIZE 5

void swap(int *x, int* y)
{
    *x += *y;
    *y = *x-*y;
    *x -= *y;
}

void selectionsort(int arr[SIZE])
{
    int min;
    for(int i = 0; i < SIZE - 1; i++)
    {
        min = i;
        for(int j = i + 1; j < SIZE; j++)
        {
            if(arr[min] > arr[j])
                min = j;
        }
        swap(&arr[min],&arr[i]);
    }
}
int main()
{
    int arr[SIZE];
    printf("HELLO\nPlease enter the numbers you want to put in the array: ");
    for(int i = 0; i < SIZE; i++)
        scanf("%d",&arr[i]);

        selectionsort(arr);
        printf("The sorted array is now:\n");
        for(int i = 0; i <SIZE; i++)
        printf("%d ",arr[i]);
return 0;
}