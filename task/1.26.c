#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i = 0xffffffff;
    printf("%d,%d\n",i,(unsigned short)i);
    printf("%hx\n",(unsigned short)i);
    return 0;
}
