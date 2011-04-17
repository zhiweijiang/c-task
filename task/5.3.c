#include <stdio.h>


void squeeze(char s1[], char s2[])
{
    int i, j, k;
    for (i = k = 0;s1[i] != 0; i++) 
    {
       for(j = 0; s2[j] != 0 && s2[j] != s1[i]; j++)
                ;
            if(s2[j] == 0)
                s1[k++] = s1[i];
    }
    s1[k] = '\0';
    
    return;
}


int main(int argc, const char *argv[])
{
    char s1[] = "abcdefg";
    char s2[] = "xbb";
    printf("before squeeze:s1 = %s s2 = %s\n", s1, s2);
    squeeze(s1, s2);
    printf("after squeeze:s1 = %s s2 = %s\n", s1, s2);
    return 0;
}
