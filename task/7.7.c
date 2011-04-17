#include <stdio.h>
#include <unistd.h>

typedef struct 
{
    int hour;
    int minute;
    int second;
}Clock;

void update(Clock *t)
{       
    t->second ++;
    if(t->second == 60)
    {
        t->second = 0;
        t->minute++;
    }
    if(t->minute == 60)
    {
        t->minute = 0;
        t->hour ++;
    }
    if(t->hour == 24)
    {
        t->hour = 0;
    }
}


int main(int argc, const char *argv[])
{
    long i;
    Clock myclock;
    myclock.hour = myclock.minute = myclock.second = 0;

    for (i = 0; i < 100000; i++)
    {
        update(&myclock);
     printf("%2d:%2d:%2d\r", myclock.hour, myclock.minute, myclock.second);
     fflush(stdout);
     sleep(1);
    }

    return 0;
}
