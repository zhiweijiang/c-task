#include <stdio.h>

int main(int argc, const char *argv[])
{


    int a[] = {1,2,3,5,6,7,8,9,0,11,22,33,44,55,66};
    int len = sizeof(a)/sizeof(int);
    int i = 0, j = len -1;
    int tmp;
    
    for(i = 0; i< len;  i++) 
    {
        printf("a[%d] = %d ", i, a[i]);
    }
    printf("\n");
    for (i = 0, j = len -1; i < j; i++) 
    {
        if(a[i]%2 == 0)
        {
            while(a[j]%2 == 0)
            j--;
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            j--;
        }
    }
    printf("After modified:\n");
    for(i = 0; i< len;  i++) 
    {
        printf("a[%d] = %d ", i, a[i]);
    }
    printf("\n");
    printf("sizeof(a) = %d, len = %d\n", sizeof(a), len);
    return 0;

}

