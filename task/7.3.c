#include <stdio.h>

int main(int argc, const char *argv[])
{
    enum weekdays{Mon = 1, Tues, Wed, Thur, Fri, Sat, Sun};
    enum weekdays weekday;
    int tmp;
    scanf("%d", &tmp);
    weekday = tmp;
    switch(weekday)
    {
     case Mon:printf("Today is Monday!\n");
              break;
     case Tues:printf("Today is Tuesday!\n");
              break;
     case Wed:printf("Today is Wednesday!\n");
              break;
     case Thur:printf("Today is Thursday!\n");
              break;
     case Fri:printf("Today is Friday!\n");
              break;
     case Sat:printf("Today is Saturday!\n");
              break;
     case Sun:printf("Today is Sunday!\n");
              break;
     default :
        printf("Your input is not include in 1-7!\n");
        break;
    }

    return 0;
}
