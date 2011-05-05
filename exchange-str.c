#include <stdio.h>
#include <string.h>

void exchange_str(char *s);

int main(int argc, const char *argv[])
{
    char str[4096] = "abcdef";

    exchange_str(str);
    printf("%s\n", str);
    return 0;
}

void exchange_str(char *s)
{
    char c;
    int i;

    for (i = strlen(s)/2 -1; i >=0; i--) 
    {
        c = *(s+i+strlen(s)/2);
        *(s+i+strlen(s)/2) = *(s+i);
        *(s+i) = c;
    }

}
