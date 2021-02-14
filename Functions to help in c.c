/*strGet() takes in a location of the string, and the max
number of character to be input...
Basic use is to improve fgets() and remove the \n escape sequence from the string.*/
// char*strGet(char*, int);
char* strGet(char* str, int len)
{
    fgets(str,len,stdin);
    for(int i=0; i<len; ++i)
    {
        if(str[i+1]=='\0' && str[i]=='\n')
        {
            str[i]='\0';
            return;
        }
    }
    return;
}

//returns G.C.D. of two ints
int gcd(int num1, int num2)
{
    int res = 1;
    for(int i = 2; num1 != 1 && num2 != 1; i++)
    {
        while(num1 % i == 0 || num2 % i == 0)
        {
            if(num1 % i == 0 && num2 % i == 0)
            {
                res *= i;
            }
            num1 /= i;
            num2 /= i;
        }
    }
    return res;
}