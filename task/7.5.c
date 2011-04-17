#include <stdio.h>
#pragma pack(16)

int i;
char j;
typedef struct
{
    char d;
   int b;
  //  short c[7];
}node;


int main(int argc, const char *argv[])
{
    node a;
    printf("%d\n,%d,%d", sizeof(a), sizeof(i), sizeof(j));
    return 0;
}
