#include <stdio.h>
#include <stdarg.h>

void myprintf(char * fmt, ...)
{
    va_list ap;
    int ival;

    va_start(ap, fmt);
    ival = va_arg(ap, int);
    printf("<myprintf>:%s:%d\n",fmt, ival);
    va_end( ap);
}



int mymax(int fmt, ...)
{
    va_list ap;
    int i = 0;
    int ival;
    int max =0;

    va_start(ap, fmt);
    for (i = 0; i < fmt; i++) 
    {
        ival = va_arg(ap, int);
        printf("<myprintf>%d\n", ival);
        if(ival > max)
            max = ival;
    }
    va_end (ap);
    return max;
}

#define PRINTF printf


int main(int argc, const char *argv[])
{
    int test = 123;
    
    test = mymax(2, 123, 456);
    printf("max 2 number is %d\n", test);
    test = mymax(3, -200, 700, 234);
    printf("max 3 number is %d\n", test);
    test = mymax(4, 800, 400, 100, 200);
    printf("max 4 number is %d\n", test);
    return 0;
}
