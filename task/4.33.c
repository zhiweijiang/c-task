#include <stdio.h>

int main(int argc, const char *argv[])
{
    int *p;
    int a[5] = {1,2,3,4,5};
    
    p = a;
    *p = 1;
    *a = 1;
    *(a+1) = 2;
    *(p+1) = 2;
    p++;
    *p = 2;
    *(a+1) = 3;
    putchar("hello"[0]);
    printf("%d\n",1[a]);
    
    return 0;
}
