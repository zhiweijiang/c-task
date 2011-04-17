#include <stdio.h>

int main(int argc, const char *argv[])
{
    
    int i;

    printf("1-200/3 != 0:\n");
    for (i = 1; i <= 200; i++) 
    {
        if(i % 3)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
 }
