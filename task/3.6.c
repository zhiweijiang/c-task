#include <stdio.h>
#define N 15


int main(int argc, const char *argv[])
{
    int a[N] = {100, 11, 2, 13, 3, 5, 19, 11, 7, 13, 91, 19, 3, 5, 3};
    int i, j, reallen = N;
    int k;

    printf("Before delete the repeated number:\n");
    for (i = 0; i < reallen; i++) 
    {
        printf("a[%d] = %d\t", i, a[i]);
        if( i%4 == 3)
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < reallen; i++) 
    {
        for (j = k = i+1; j < reallen; j ++) 
        {
            if(a[i] != a[j])
                a[k++] = a[j];
        }
        reallen =k;
    }
    printf("After delete the repeated number:\n");
    for (i = 0; i < reallen; i++) 
    {
        printf("a[%d] = %d\t", i, a[i]);
        if(3 == i%4)
        printf("\n");
    } 
    printf("\n");
       return 0;
}
