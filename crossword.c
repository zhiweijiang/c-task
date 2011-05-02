#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4

void init_num(int num[], int n);
void crossword(int num[], int n);

int main(int argc, const char *argv[])
{
    int num[N];
    int i;

    init_num(num, N);
    crossword(num, N);
    return 0;
}


void init_num(int num[], int n)
{
    int i;
    int j;
    
    srand(time(NULL));
    for (i = 0; i < n; i++) 
    {
        num[i] = rand()%10;
        for (j = 0; j < i; j++) 
        {
            if(num[j]==num[i])
            {
            i--;
            break;
            }
        }
       
    }
}


void crossword(int num[], int n)
{
    int i, j;
    int figures[n];
    char input_num[10];
    char str[] = "I GIVE UP";

    printf("plesase input  four not repeated figures:");
    while(1)
    {
        fgets(input_num, 10, stdin); 
        if(strncmp(input_num, str, 9)==0)
        {
            printf("The right result:");
            for (i = 0; i < n; i++) 
            {
                printf("%d", num[i]);
            }
            printf("\n");
            break;
        }
        for (i = 0; i < n; i++) 
        {
            figures[i] = input_num[i]-0x30;
        }
        for (i = 0,j = 0; i < n; i++) 
        {
            if(figures[j] == num[i])
                j++;
        }
        if(n == j)
        {
            printf("YOU BET!\n");
            printf("THe right result:%s", input_num);
            break;
        }
        for (i = 0; i < n; i++) 
        {
            for (j = 0; j < n; j++) 
            {
                if(num[i] == figures[j])
                {
                    if(i == j)
                    {
                        printf("A");
                    }
                    else
                    {
                        printf("B");
                    }
                    break;
                }
            }
        }
        printf("\nplesase input  four not repeated figures again:");
    }
}
