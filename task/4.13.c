#include <stdio.h>


void foo(char *p)
{
    p = "Hello world!";
    printf("p = %p\n", p);
}


int main(int argc, const char *argv[])
{
    char *q = NULL;
    foo(q);

    printf("q = %p\n", q);

    return 0;
}
