#include <stdio.h>
#include<string.h>

int  my_strcmp(char s1[], char s2[])
{
    int i;
    for (i = 0; s1[i] == s2[i]; i++) 
    {
        if(s1[i] == '\0'||s2[i] == '\0')
            return 0;
    }
    if(s1[i] - s2[i] > 0)
        return 1;
    else
        return -1;
}


int main(int argc, const char *argv[])
{
     char s1[10] = "abc";
     char s2[10] = "abc";
     printf("strcmp(s1,s2) = %d,my_strcmp(s1,s2)= %d\n", strcmp(s1,s2), my_strcmp(s1,s2));
      strcpy(s1,"ABC");
      strcpy(s2,"ABB");
      printf("strcmp(s1,s2) = %d,my_strcmp(s1,s2)= %d\n", strcmp(s1,s2), my_strcmp(s1,s2));
    return 0;
}
