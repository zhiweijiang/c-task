#include <stdio.h>


struct hole 
{

    char a;
    int b;
    short c;
    char d;
    //int i;
   // char a[10];
};


struct no_hole 
{
    int b;
    short c;
    char a;
    char d;
};

struct hole a = {'a', 0x11223344, 0x8899, 'd'};
struct no_hole b = {0xb, 0xc, 'a', 'd'};


int main(int argc, const char *argv[])
{
    printf("hello, Cruel World!\n");
    printf("sizeof hole = %d\n",  sizeof(a));
    printf("sizeof no_hole = %d\n",  sizeof(b));
    return 0;
}
