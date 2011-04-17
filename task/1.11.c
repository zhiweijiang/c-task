#include <stdio.h>


int goo(int d, int e, int f)
{
    int g = d + e;
    return f;
}

int foo()
{
    return 0;
}

int swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    return 0;
}


int main(int argc, const char *argv[])
{
    int x, y;
    x = -1;
    y = 2;
    printf("hell\n",x,y);
    swap(5, 6);
    goo(2, 3, 4);
    foo(1,2,34,5);
    return 0;
}
