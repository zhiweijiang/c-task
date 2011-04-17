#include <stdio.h>
#include <assert.h>

int fibonacci(int n)
{
    assert(n >= 0);
    if(n == 0||n == 1)
    return 1;
    else 
    return fibonacci(n-1)+fibonacci(n-2);
}


int main(int argc, const char *argv[])
{
    int n;

    printf("Please input a number:");
    scanf("%d", &n);
   printf("In main func, fibonacci(%d) = %d\n", n, fibonacci(n));
    return 0;
}
