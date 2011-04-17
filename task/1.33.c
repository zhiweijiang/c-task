#include <stdio.h>

#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int a,b;
    
    a = atoi(argv[1]);

    b = atoi(argv[2]);

    printf("%d %d %c\n",a, b, *argv[3]);

    switch(*argv[3])
    {
        case '*':
            printf("%d * %d = %d\n",a, b, a*b);
                break;
        case '-':
            printf("%d - %d = %d\n",a, b, a-b);
                break;
        case '+':
            printf("%d + %d = %d\n",a, b, a+b);
                break;
        case '/':
            printf("%d / %d = %d\n",a, b, a/b);
                break;

    }
    return 0;
}
