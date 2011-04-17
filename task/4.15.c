#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int  sum(int a[], int len)
{
    int result = 0;

    for(;len; len --, a++)
        result += *a;

        return result;
}

int  sub(int a[], int len)
{
    int result = *a;

    for(a ++; len - 1; len --, a++)
        result -= *a;

        return result;
}


int main(int argc, const char *argv[])
{
    int a[10];
    int *p = a;
    srand(time(NULL));
    for(; p < a + 10; p++)
        *p = rand()%50;
    for(p = a; p < a + 10; p ++)
        printf("a[%d] = %d\n", p-a, *p);
 printf("sum = %d, sub = %d\n", sum(a, 10), sub(a, 10));

    return 0;
}
