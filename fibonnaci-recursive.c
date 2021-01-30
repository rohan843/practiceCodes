#include<stdio.h>

void fact(int,int);
void fibonnaci(int a, int b, int i);

void main()
{
    fibonnaci(1,1,0);                                          //start series from 1 1...
}

//prints fibonnaci series upto its first 25 numbers
  
void fibonnaci(int a, int b, int i)
{
    if(i == 23)                                                  //base case not i==25 as 3 numbers printed in else if statement, but i incremented once.
        return;
    else if(i == 0)
    {
        printf("%d %d %d ", a, b, a+b);
        i++;
        fibonnaci(b,a+b,i);
    }
    else
    {
        int n;
        n=a+b;
        printf("%d ", n);
        i++;
        fibonnaci(b,n,i);
    }
}