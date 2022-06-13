#include <stdio.h>

void Capitula(char* minuscula, char* maiuscula)
{
	(*maiuscula) = (*minuscula)-32;
}

int main()
{
	char letra, maiuscula;

	do
	{
		printf("Letra: ");
		scanf("%c", &letra);
		getchar();

		if (letra < 97 || letra > 122)
		{
			printf("Por favor digite uma letra minuscula.\n");
		}
	}
	while (letra < 97 || letra > 122);

	Capitula(&letra, &maiuscula);

	printf("Maiuscula: %c", maiuscula);

	return 0;
}
