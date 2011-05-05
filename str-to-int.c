#include <stdio.h>

int str_to_int(char *s);

int main(int argc, const char *argv[])
{
    char str[4096]= "-1234";
    int number;

    number = str_to_int(str);
    printf("%d\n", number);
    return 0;
}

int str_to_int(char *s)
{
    int number=0;
    int flag = 0;

    if(*s == '-')
       {
        s++;
        flag = 1;
       }
    if(*s>'0' && *s<'9')
    {
        number = (int)(*s -'0');
        s++;
    while(*s>'0' && *s<'9')
        {
            number *=10;
            number += (int)(*s - '0');
            s++;
        }
    }
    else 
    {
        return -1;
    }
    if(flag)
    return (0-number);
    else 
    return number;
}
