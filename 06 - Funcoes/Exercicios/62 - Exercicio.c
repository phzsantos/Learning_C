#include <stdio.h>

void Tamanho(char* string, int* string_size)
{
	for (int i = 0; *(string+i) != '\0'; i++)
	{
		(*string_size) = i;
	}
}

int main()
{
	int string_size;
	char string[3] = "dia";

	Tamanho(&string[0], &string_size);

	printf("Tamanho string: %d", string_size);

	return 0;
}
