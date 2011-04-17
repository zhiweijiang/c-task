#include <stdio.h>


int day_tab[2][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};


int dayofyear(int year, int month, int day)
{
    int is_leapyear, j;
    is_leapyear = (year%4 ==0 && year%100!=0)||(year%400 ==0);

    if((is_leapyear == 0)&&(month == 2) && (day >= 29))
    {
        printf("%d out of range!\n", day);
        return -1;
    }
    for(j = 1; j < month; j++)
        day += day_tab[is_leapyear][j];
        return day;
}


int main(int argc, const char *argv[])
{
    int y, m, d;
    
    printf("Please input y:m:d\n");
    scanf("%d:%d:%d", &y, &m, &d);
    printf("%d:%d is %d of year %d!\n", m, d, dayofyear(y, m, d), y);
    return 0;
}
