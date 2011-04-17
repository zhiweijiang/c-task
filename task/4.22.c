#include <stdio.h>

int main(int argc, const char *argv[])
{
    int b = 5;
    int a = (int)&b;
    int *p = &a;
    int c = *p;
    p = (int *)100;
//    printf("%d %d\n",a,c);
    return 0;
}
