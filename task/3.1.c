#include <stdio.h>
#include <stdlib.h>
#define N 100

int foo(int n)
{
    char a[N];
    int i;
    if (0 == n)
        printf("0");
    for (i = 0; n != 0; i++) 
    {
        int tmp = n%16;
        if (tmp <= 9)
            a[i] = tmp + '0';
        else 
           a[i] = (tmp - 10) + 'a';
           n /= 16;
    }
    while (i)
        printf("%c", a[--i]);
      printf("\n");
    return 0;
}


int main(int argc, const char *argv[])
{
    int n = atoi(argv[1]);
    foo(n);
    return 0;
}
