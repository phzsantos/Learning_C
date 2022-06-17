#include <stdio.h>

void Intercalacao(char* string, char* string2)
{
    int j = 0;
    for (int i = 1; i < 10; i+=2)
    {
        *(string+i) = *(string2+j);
        j++;
    }
}

int main()
{
    char string[10] = "0123456789", string2[6] = "012345";

    Intercalacao(&string[0], &string2[0]);

    for (int i = 0; i < 10; i++)
    {
        printf("%c", string[i]);
    }

    return 0;
}
