#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a = 0;
    int *q = 0;
    int **p = 0;
    p = &q;
    q = &a;
    **p = 5;
    a = 5;
    *q = 5;
    return 0;
}
