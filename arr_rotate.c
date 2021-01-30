#include<stdio.h>

void shift(int arr[20], int n)
{
    int i;
    //printf("%s\n", "done 1 shift");
    for(i = 0; i<n-1; i++)
    {
        arr[i] = arr[i] + arr[i+1];
        arr[i+1] = arr[i] - arr[i+1];
        arr[i] = arr[i] - arr[i+1];
    }
    //printf("%s\n", "done 1 shift");
}

int main()
{
    int arr[20], n, i=0, s;
    scanf("%d%d", &n, &s);
    //printf("%d %d\n", n,s);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<s;i++)
    {
        shift(arr, n);
        //printf("%d ", arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}