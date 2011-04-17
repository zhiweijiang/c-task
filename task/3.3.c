#include <stdio.h>


int remove_space(char s[])
{
    int i, j;
    for (i = j = 0; s[i]; i++) 
    {
        if (s[i] != ' ')
           s[j++] = s[i];
    }
    s[j] = 0;
    return 0;
}


int main(int argc, const char *argv[])
{
    char s[]=" I am a student ";

    printf("%s\n", s);
    remove_space(s);
    printf("%s\n", s);
    return 0;
}
