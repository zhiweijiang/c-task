#include <stdio.h>
#include <string.h>
#define N 30

char * mystrstr(char *s, char *p)
{
    char tmp[N];
    int i;

    if(*p == 0)
        return s;
    if(strlen(s) < strlen(p))
       return NULL;
       for(i = strlen(s); i; i--,s++)
       {
            strncpy(tmp,s,strlen(p));
            tmp[strlen(p)] = '\0';
            if(strcmp(tmp, p) ==0)
                return s;
       }
       return NULL;
}
int main(int argc, const char *argv[])
{
    char str[N];
    char sub[N];

    if(3 != argc)
    {
        printf("Arguments shoule be 3!\n");
        return 0;
    }
    strcpy(str, argv[1]);
    strcpy(sub, argv[2]);
    printf("sub:%s\tstrstr:%s\n", sub, mystrstr(str,sub));

    return 0;
}
