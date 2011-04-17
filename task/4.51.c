#include <stdio.h>


int foo(int a[])
{
    return 0;
}


int main(int argc, const char *argv[])
{
    int (*p)[10] = (int(*)[10])100;
    int a[10];
    int *q[10];

    p = &a;
    q[0] = (int *)100;
    foo(a);
    
    return 0;
}
