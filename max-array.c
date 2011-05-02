#include <stdio.h>
#define LEN 10

int max_array(int a[], int n);
void input_array(int a[], int n);
void print_array(int a[], int n);

int main(int argc, const char *argv[])
{
    int a[LEN];
    int max_sum;

    printf("Please input ten a number:\n");
    input_array(a, LEN);
    printf("The number array:\n");
    print_array(a, LEN);
    max_sum = max_array(a, LEN);
    printf("The max number array value:%d\n", max_sum); 
    return 0;
}

int max_array(int a[], int n)
{   
    int i, j;
    int max_sum = 0;
    int sum = 0;
    int min = 0;
    int max = n-1;

    while(a[min] <= 0) min++;
    while(a[max] <= 0) max--;
    for (i = min; i < max+1; i++) 
    {
        sum = 0;
        for (j = i;j < max+1; j++) 
        {
            sum += a[j];
            if(max_sum < sum)
                max_sum = sum;
        }
        
    }


    return max_sum;
}

void input_array(int a[], int n)
{   
    int  i;

    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
}

void print_array(int a[], int n)
{
    int i;
    
    for (i = 0; i < n; i++) 
    {
        printf("%-5d", a[i]);
    }
    printf("\n");
}
