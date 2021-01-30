#include<stdio.h>

void swap(int *n1, int *n2)
{
    *n1 = *n1 + *n2;
    *n2 = *n1 - *n2;
    *n1 = *n1 - *n2;
}

int main()
{
    int arr[10], n, i = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i<n/2; i++)
    {
        swap(&arr[i], &arr[n - i - 1]);
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}