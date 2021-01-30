#include<stdio.h>
#define N_Max 32
int check_Symm(int logo[N_Max][N_Max], int N);
void take_Logo(int logo[N_Max][N_Max], int N);

int main(void)
{
    int i = 0, T, N, logo[N_Max][N_Max];
    scanf("%d", &T);
    i = T;
    while(i > 0)
    {
        --i;
        scanf("%d", &N);
        take_Logo(logo,N);
        //check_Symm(logo, N) == 0 ? printf("NO\n") : printf("YES\n");
        for(int k = 0; k<N; k++)
        {
            for(int l = 0; l<N; l++)
            {
                printf("%d ", logo[k][l]);
            }
            printf("\n");
        }
    }
}

void take_Logo(int logo[N_Max][N_Max], int N)
{
    int i = 0, j = 0;
    char in[80];
    for(i = 0; i<N; i++)
    {          
        scanf("%s", in);
        for(j = 0; j<N; j++)
        {
            logo[i][j] = in[j] - '0';
        }
    }
}

int check_Symm(int logo[N_Max][N_Max], int N)
{
    int test = 1;
    if(N % 2 == 0)
    {
        for(int i = 0; i < N/2; i++)
        {
            for(int j = 0; j<N; j++)
            {
                if(logo[i][j] == logo[N-1-i][j])
                    continue;
                else
                {
                    test = 0;
                    return test;
                }
            }
        }
        for(int i = 0; i < N/2; i++)
        {
            for(int j = 0; j<N; j++)
            {
                if(logo[j][i] == logo[j][N-1-i])
                    continue;
                else
                {
                    test = 0;
                    return test;
                }
            }
        }
    }
    else
    {
        for(int i = 0; i < N/2; i++)
        {
            for(int j = 0; j<N; j++)
            {
                if(logo[i][j] == logo[N-1-i][j])
                    continue;
                else
                {
                    test = 0;
                    return test;
                }
            }
        }
        for(int i = 0; i < N/2; i++)
        {
            for(int j = 0; j<N; j++)
            {
                if(logo[j][i] == logo[j][N-1-i])
                    continue;
                else
                {
                    test = 0;
                    return test;
                }
            }
        }
        for(int i=0; i < N/2 ; i++)
        {
            if(logo[N/2][i] == logo[N/2][N-i-1])
                continue;
            else
            {
                test = 0;
                return test;
            }
        }
        for(int i=0; i < N/2 ; i++)
        {
            if(logo[i][N/2] == logo[N-i-1][N/2])
                continue;
            else
            {
                test = 0;
                return test;
            }
        }
    }
    return test;
}


//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/roy-and-symmetric-logos-1/description/
