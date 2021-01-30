/*This code prints frequency of various alphabets and digits in a string.
Capital and lower case are treated as same.*/

#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 1000
int main(void)
{
    char s[MAX_SIZE], Chr;
    int a[36] = {0}, i = 0;
    printf("Enter a String\n");
    gets(s);
    while(s[i] != '\0')
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            ++a[(int)(s[i] - 'A')];
        } 
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            ++a[(int)(s[i] - 'a')];
        } 
        if(s[i] >= '0' && s[i] <= '9')
        {
            ++a[26 + (int)(s[i] - '0')];
        }
        i++;
    }
    printf("%5s%11s\n", "Value", "Frequency");
    for(size_t j=0; j<36; j++)
    {
        if(j <= 25)
            Chr = j + 'A';
        else
            Chr = j + '0' - 26;
        printf("%5c%11d\n", Chr, a[j]);
    }
}
