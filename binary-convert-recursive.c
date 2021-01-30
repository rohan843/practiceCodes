#include<stdio.h>


int to_binary(int num, int binary[100], int i);

void main()
{
    int num, i;
    int binary[100];
    printf("Enter a number\n");
    scanf("%d", &num);
    i = to_binary(num, binary, 0);
    for(int j=0; j<i/2; j++)
    {
        binary[j] = binary[i - j - 1] + binary[j];
        binary[i - j - 1] = binary[j] - binary[i - j - 1];
        binary[j] = binary[j] - binary[i - j - 1];
    }
    for(int j = 0; j<i; j++)
    {
        printf("%d ", binary[j]);
    }
}

int to_binary(int num, int binary[100], int i)
{
    if(num == 0)
        return;
    else
    {
        binary[i] = num - 2*(num/2);
        int e = num/2;
        i = to_binary(e, binary, i + 1);
    }
    return i;
}