#include <stdio.h>


int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}


int main(int argc, const char *argv[])
{
    int ret;
    printf("hello,Cruel Workd!\n");

    ret = add(100, 200);
    printf("add = %d\n",ret);

    ret =sub(100, 200);
    printf("sub = %d\n",ret);

    return 0;
}
