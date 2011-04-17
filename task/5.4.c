#include <stdio.h>
#include <string.h>


int main(int argc, const char *argv[])
{
    char s1[] = "Hello World!";
    char s2[20];
    int  i = 0;

    while( s1[i])
     {
        s2[i] = s1[i];
        i++;
     }
        s2[i] = '\0';
        printf("while:%s\n", s2);
        for (i = 0; i < strlen(s1); i++) 
        {
            s2[i] =s1[i];   
        }
        printf("for:%s\n", s2);
        strcpy(s2, s1);
        printf("strcpy:%s\n", s2);
    return 0;
}
