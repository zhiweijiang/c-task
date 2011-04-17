#include <stdio.h>

int main(int argc, const char *argv[])
{
    char a = 'A', b = 'X';
    char *p = NULL;

    printf("addr a =%p, a = %c\n", &a, a);
    printf("addr b =%p, b = %c\n", &b, b);
    p = &a;
    *p = 'Y';
    printf("p(a) = %p, *p = %c\n", p, *p);
    p = &b;
    *p = 'B';
    printf("p(b) = %p, *p = %c\n", p, *p);;
   
   return 0;
}
