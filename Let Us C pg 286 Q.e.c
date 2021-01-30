#include<stdio.h>
#include<string.h>

//Let Us C pg 286 Q.e 

void main()
{
    char str[100];
    printf("Enter the string\n");
    gets(str);
    for(int i = 0; str[i+1] != '\0'; i++)
    {
        if((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' 
        || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
        && (str[i+1] == 'a' || str[i+1] == 'e' || str[i+1] == 'i' || str[i+1] == 'o' || str[i+1] == 'u' 
        || str[i+1] == 'A' || str[i+1] == 'E' || str[i+1] == 'I' || str[i+1] == 'O' || str[i+1] == 'U'))
        {
            putchar(str[i]);
            putchar(str[i + 1]);
            putchar('\n');
        }
    }
}