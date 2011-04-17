#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[10];
    int *q, *p;
    int tmp;
    int *pos;
    
    printf("Please input 10 number:\n");
    for(p = a; p - a < 10; p++)
        scanf("%d", p);
     printf("Before sort:\n");
     for(p = a; p - a < 10; p++)
     {
     printf("a[%d] = %d\t", p-a, *p);
    if ((p-a)%4 == 3)
         printf("\n");
     }
     printf("\n");
    for(p = a; p - a < 9; p++)
    {
          pos = p;
        for(q = p + 1; q - a < 10; q++)
        {
            if(*q < *pos)
                pos = q;
        }
        if(pos != p)
        {
            tmp = *pos;
            *pos = *p;
            *p = tmp;
        }
    }
    printf("After sort:\n");
    for(p = a; p - a < 10; p++)
     { 
        printf("a[%d] = %d\t", p-a, *p);
       if((p-a)%4 == 3)
         printf("\n");
     }
     printf("\n");
    return 0;
}
