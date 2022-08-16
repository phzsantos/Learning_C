#include <stdio.h>

int main()
{
    int variavel_1, variavel_2;
    
    if (&variavel_1 > &variavel_2)
    {
        printf("%p\n", variavel_1);
    }
    else
    {
        printf("%p\n", variavel_2);
    }

    return 0;
}