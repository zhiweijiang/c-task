#include <stdio.h>

void str_to_int(char *s, int num);
int main(int argc, const char *argv[])
{
    int number = 1234;
    char str[4096];

    str_to_int(str, number);
    printf("%s\n", str);
    return 0;
}


void str_to_int(char *s, int num)
{
    int a[20];
    int i = 0;
    int k = 0;

    if(num < 0)
    { 
        *s = '-';
        s++;
        num = 0-num;
    }
     if(num == 0)
      {
        *s = '0';
        *(s++) = '\0';
        return;
      }
     while(num > 0)
     {  
        a[i] = num%10;
        num /= 10;
        i++;
     }
     k = i-1;
     for (i = k; i >= 0; i--) 
     {
         *s = (char)a[i] + '0';
         s++;
     }
     *s = '\0';
}
