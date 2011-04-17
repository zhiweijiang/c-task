#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10

int  init_array(int a[], int len)
{
    srand(time(NULL));
    int i;
    for (i = 0; i < len; i++) 
    {
        a[i] = rand()%100;  
    }
    return 0;
}


int  show(int a[], int len)
{
    int i;
    for (i = 0; i < len; i++) 
    {
        printf("%4d\t", a[i]);
    }
    printf("\n");
    return 0;
}

#if 0

int  foo(int a[], int len, int *f, int *s)
{
    int i;
    int max = 0;
    for (i = 0; i < len; i++) 
    {
        if(a[max] < a[i])
            max = i;
    }
    int sec = (max == 0)? 1 : 0;
    for (i = 0; i < len; ++i) 
    {
        if((a[sec] < a[i])&&(i != max))
            sec = i;
    }
    *f = a[max];
    *s = a[sec];
    return;
}

#else

int  foo(int a[], int len, int *f, int *s)
{
    int i;
    int max = (a[0]>a[1])? 0:1;
    int sec = (a[1]>a[0])? 0:1;

    for(i = 2; i < len; i++)
    {
        if(a[max] < a[i])
        {
            sec = max;
            max = i;
        }
        else if(a[sec] < a[i])
            sec = i;
    }
    *f = a[max];
    *s = a[sec];
    return 0;
}

#endif
int main(int argc, const char *argv[])
{
    int a[N] = {6,3,4,5,7};
    int len = N;
    int f, s;

    init_array(a, len);
    show(a, len);
    foo(a, len, &f, &s);
    printf("first = %d\n", f);
    printf("second = %d\n", s);
    return 0;
}
