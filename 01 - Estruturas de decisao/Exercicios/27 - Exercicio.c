#include <stdio.h>

int main()
{
	int idade;

	printf("Idade: ");
	scanf("%d", &idade);

	if (idade > 4)
	{
		if (idade < 8)
		{
			printf("Infantil A");
		}
		else if (idade < 11)
		{
			printf("Infantil B");
		}
		else if (idade < 14)
		{
			printf("Juvenil A");
		}
		else if (idade < 18)
		{
			printf("Juvenil B");
		}
		else
		{
			printf("Senior");
		}
	}
	else
	{
		printf("Ainda nao pode competir.");
	}

	return 0;
}
