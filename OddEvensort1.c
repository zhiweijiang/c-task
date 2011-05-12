#include <stdio.h>
#include <string.h>

int a[8];


void print(int a[], int n)
{   
    int i;

    for (i = 0; i < n; i++) 
        {
            printf("%5d", a[i]);
        }   
        printf("\n");
}


void insert_odd(int i)
{
    int k = 0;
    int tmp;

    while(a[k] < a[i])
        k++;
        if(k != i)
        {
            tmp = a[i];
            memmove(&a[k+1], &a[k], (i-k)*sizeof(a[0]));
            a[k] = tmp;
        }
}


void insert_even(int *i)
{
    int k = 7;
    int tmp;
    int repnum = *i;

    while((a[k]%2==0)&&(a[k] > a[*i]))
        k--;
    while(a[repnum] == a[*i])
        repnum++;
        if((k != *i)&&(k != repnum-1))
        {   
           
            tmp = a[*i];
            memmove(&a[*i], &a[repnum], (k-repnum+1)*sizeof(a[0]));
            a[k] = tmp;
            a[k-repnum+*i+1] = tmp;
            *i = *i-1;
        }
        print(a, 8);
}

void init(int a[], int n)
{
    int i;

    srand(time(NULL));
    for (i = 0; i < n; i++) 
    {
        a[i] = rand()%200 - 100;
    }
}


int main(int argc, const char *argv[])
{
    int i;
    
    init(a, 8);
    printf("The init:\n");
    print(a, 8);
    for (i = 0; i < 8; i++) 
    {
        if(a[i]%2 != 0)
            insert_odd(i);
        else
           {
           insert_even(&i);
           }
    }
    printf("After sort:\n");
    print(a, 8);
        return 0;
}
