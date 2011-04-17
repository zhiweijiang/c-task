#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[100];
    int i = 0;
    for (i = 0; i < 100; i++) 
    {
        a[i] = 100 + i;
        printf("%d%c",a[i],(i%5!=4)? '\t':'\n');
    }
    return 0;
}
