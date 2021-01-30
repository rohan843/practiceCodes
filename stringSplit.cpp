#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[]={"New,Old,Modern"};
    int i=0;
    char *token = strtok(a, ",");
    while(token != NULL)
    {
        cout<<token<<i++;
        token = strtok(NULL, ",");
    }
}