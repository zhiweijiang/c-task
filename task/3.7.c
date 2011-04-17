#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[5][5] = {{11, 2, 5, 8, 1},
                   {33, 21, 45, 7, 90},
                   {9, 31, 34, 51, 21},
                   {-9, 7, 3, -8, 72},
                   {6, 22, -71, 88, 34}};
    int tmp;
    int i = 0;
    int j = 0;

    printf("before T array a:\n");
    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < 5; j++) 
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    for (i = 1; i < 5-1; i++) 
    {
        for(j = i+1; j<5; j++)
        {
         tmp = a[i][j];
         a[i][j] = a[j][i];
         a[j][i] = tmp;
        }
    }
    printf("After T, aaray a:\n");
    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < 5; j++) 
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
