#include<stdio.h>

void factorize(int,int);

void main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    factorize(num, 2);
}


void factorize(int num, int i)
{
    if(num == 1)
    {
        return;
    }
    else
    {
        if (num % i == 0)
        {
            num /= i;
            printf("%d ", i);
            factorize(num,i);
        }
        else
        {
            i++;
            factorize(num,i);
        }       
    }
    
}

