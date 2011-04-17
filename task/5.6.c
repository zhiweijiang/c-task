#include <stdio.h>
#include <string.h>
#define N 50

int main(int argc, const char *argv[])
{
    char s[N];
    char *p;

    if(3 != argc)
    {
        printf("You need input 3 argument,length of argv[1]<50!!\n");
        return 0;
    }
    strcpy(s, argv[1]);
    p = strstr(s, argv[2]);
    printf("After strstr,s = %s, p = %s\n", s, p);

    return 0;
}
