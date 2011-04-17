#include <stdio.h>

int is_prime(int n)
{
    int i;

    for (i = 2; i < n;  i++) 
    {
        if(n % i == 0)
            break;
    }
    if( i == n)
        return 1;
   else 
        return 0;
}


int main(int argc, const char *argv[])
{
      int i;

     
      for (i = 0; i <= 100; i++) 
      {
          if(is_prime(i))
          printf("%d ",i);
      }
    printf("\n");
      return 0;
}
