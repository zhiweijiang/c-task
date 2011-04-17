#include <stdio.h>

int main(int argc, const char *argv[])
{
    float f;
    double d;

    scanf("%f", &f);
    scanf("%lf", &d);
    printf("%f, %lf\n", f, d);
    return 0;
}
