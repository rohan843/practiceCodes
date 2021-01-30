#include<stdio.h>

void main()
{
    void bubblesort(int*, int);
    int arr[20], n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the array\n");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubblesort(arr, n);
    for(int i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubblesort(int arr[20], int n)
{
    int i;
    for(i=0; i<n-2;i++)
    {
        for(int k = 0; k<n-1-i;k++)
        {
            if(arr[k]>arr[k+1])
            {
                arr[k] = arr[k] + arr[k+1];
                arr[k+1] = arr[k] - arr[k+1];
                arr[k] = arr[k] - arr[k+1];
            }
        }
    }
}