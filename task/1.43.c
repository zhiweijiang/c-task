#include <stdio.h>

int main(int argc, const char *argv[])
{
    
    int result = 0;
    
    int i;
    
    char a[20] = "Hello,World!";



    for (i = 0; i < 20; i++) 
    {
        if( a[i] == 'o')
            
            result ++;
    }
    printf("%d 'o' in\"Hello,World!\"\n", result);
    return 0;
}
