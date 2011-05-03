#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define N 4

void init_num(char num[], int n);
void crossword(char num[], int n);
int input_error(char num[], int n);


int main(int argc, const char *argv[])
{
    char num[N+1];

    init_num(num, N);
    crossword(num, N);
    return 0;
}


void init_num(char num[], int n)
{
    int i;
    int j;
    
    srand(time(NULL));
    for (i = 0; i < n; i++) 
    {
        num[i] =(char)(rand()%10+0x30);
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


void crossword(char num[], int n)
{
    int i, j, k;
    char input_num[10];
    char str[] = "I GIVE UP";

    printf("plesase input  four not repeated figures:");
    while(1)
    {
        fgets(input_num, 10, stdin); 
        if(strncmp(input_num, str, 9)==0)
        {
            printf("The right result:");
            printf("%s\n", num);
            break;
        }
        if(input_error(input_num, n))
        {
            for (i = 0,j = 0; i < n; i++) 
            {
                if(input_num[j] == num[i])
                     j++;
            }
            if(n == j)
             {
                printf("YOU BET!\n");
                printf("THe right result:%s\n", num);
                break;
            }
            k = 0;
            for (i = 0; i < n; i++) 
            {
                for (j = 0; j < n; j++) 
                {
                    if(num[i] == input_num[j])
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
                    else
                    k++;
                }
            }
        if(n*n == k)
        {
            printf("0000");
        }   
     }  
     else
       {
       printf("you input number not conform to requirements!!");
       }
        printf("\nplesase input  four not repeated figures again:");
    }
}


int input_error(char num[], int n)
{
    int i, j;

    for (i = 0; i < n; i++) 
    {
        if(num[i]>0x39 || num[i]<0x30)
            return 0;
        for (j = 0; j < i; j++) 
        {
            if(num[i] == num[j])
                return 0;
        }
    }

    return 1;
}
