#include <stdio.h>

int main(int argc, const char *argv[])
{
    char *p = "hello world";
    char str[] = "hello world";

    printf("p: %s\n", p);
    p = str;
    *p = 'H';
    printf("str:%s\n", str);

    return 0;
}
