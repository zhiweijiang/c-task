#include <stdio.h>
#include <time.h>
#include <string.h>
#define N 8

void init_num(int a[], int n);
void print_num(int a[], int n);
void EvenOddsort(int a[], int n);
void sort_num(int a[], int x, int y);

int main(int argc, const char *argv[])
{
    int num[N];

    init_num(num, N);
    printf("The init num:\n");
    print_num(num, N);
    EvenOddsort(num, N);
    printf("The sort num:\n");
    print_num(num, N);
    return 0;
}

void init_num(int a[], int n)
{
    int i = 0;

    srand(time(NULL));

    for (i = 0; i < n; i++) 
    {
        a[i] = rand()%200 -100;
    }
}


void print_num(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++) 
    {
        printf("%5d", a[i]);
    }
    printf("\n");
}


void EvenOddsort(int a[], int n)
{
    int i = 0;
    int j = n-1;
    int tmp;
    int k;

    while(i <= j)
    {
        while(a[i]%2 != 0) i++;
        while(a[j]%2 == 0) j--;
        if(i < j)
        {
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i ++;
            j --;
        }
    }
    sort_num(a, 0, j+1);
    sort_num(a, i, n);
}
   
void sort_num(int a[], int x, int y)
{
    int i,j;
    int k;
    int tmp;

    for (i = x; i < y; i++) 
    {   
        k = i;
        for (j = i+1; j < y; j++) 
        {
            if(a[j] < a[k])
                k = j;
        }
        if(i != k)
        {
            tmp = a[i];
            a[i] = a[k];
            a[k] = tmp;
        }
    }
   
}
