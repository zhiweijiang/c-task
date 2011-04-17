#include <stdlib.h>
#include <stdio.h>

int is_leap_year(int year)
{
      if((year %4 ==0)&&(year % 100 != 0))
        return 1;
      else if(year % 400 == 0)
        return 1;
      else
        return 0;
}
int main(int argc, const char *argv[])
{
    int year;

    if (argc!=2) 
    {
        printf("Usage:invariable argc,please input year!\n");
         return 0;
    }
    year = atoi(argv[1]);
    if(is_leap_year(year))
        printf("%d is leap year!\n",year);
    else 
        printf("%d is not leap year!\n",year);
    printf("%d is %s leap year!\n",year, is_leap_year(year) ?" " : "not");  
    return 0;
}
