#include<stdio.h>
#include<math.h>

int to_binary(int a, int binary[100]);

void main()
{
    int num, digits;
    int binary[100];
    printf("Enter a number\n");
    scanf("%d", &num);
    digits = to_binary(num, binary);
    for(int i = 0; i<digits; i++)
    {
        printf("%d ", binary[i]);
    }
    
}

int to_binary(int num, int binary[100])
{
    int i = 0;
    while((num != 0))
    {
        binary[i] = num - 2*(num/2);
        num = num/2;
        i++;
    }
    for(int j=0; j<i/2; j++)
    {
        binary[j] = binary[i - j - 1] + binary[j];
        binary[i - j - 1] = binary[j] - binary[i - j - 1];
        binary[j] = binary[j] - binary[i - j - 1];
    }
    return i;
}