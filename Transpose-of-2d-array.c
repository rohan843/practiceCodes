#include<stdio.h>

void main()
{
    int a[10][10]={0}, b[10][10]={0}, r, c, i, j;
    printf("Enter the array's rows and columns\n");
    scanf("%d %d", &r, &c);
    printf("Enter the array\n");
    for(i = 0; i<r; i++)
    {
        for(j = 0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("You entered:\n");
    for(i = 0; i<r; i++)
    {
        for(j = 0; j<c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    for(i = 0; i<c; i++)
    {
        for(j=0; j<r; j++)
        {
            a[i][j] = b[i][j];
        }
    }

    /*for(i = 0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            int temp;
            //a[i][j] = a[i][j] + a[j][i];
            //a[j][i] = a[i][j] - a[j][i];
            //a[i][j] = a[i][j] - a[j][i];
            temp = a[i][j]; 
        }
    }*/


    for(i = 0; i<c; i++)
    {
        for(j = 0; j<r; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}


