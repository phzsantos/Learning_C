#include <stdio.h>
#include <string.h>

union pessoa
{
	char nome[100];
	int idade;
};

union numeros
{
	int num1, num2, num3, num4, num5;
};

int main()
{
	union pessoa pes;
	union numeros n;
	int soma;

	strcpy(pes.nome, "Angelina Jolie");
	printf("Dados de %s\n", pes.nome);

	pes.idade = 39;
	printf("Ela tem %d anos\n", pes.idade);

	printf("A variavel 'pes' esta ocupando %ld bytes em memoria\n", sizeof(pes));

	soma = 0;

	n.num1 = 1;
	soma += n.num1;
	printf("O valor de num1 = %d\n", n.num1);

	n.num2 = 3;
	soma += n.num2;
	printf("O valor de num2 = %d\n", n.num2);

	n.num3 = 5;
	soma += n.num3;
	printf("O valor de num3 = %d\n", n.num3);

	n.num4 = 7;
	soma += n.num4;
	printf("O valor de num4 = %d\n", n.num4);

	n.num5 = 9;
	soma += n.num5;
	printf("O valor de num5 = %d\n", n.num5);

	printf("O valor de num1 = %d\n", n.num1);
	printf("O valor de num2 = %d\n", n.num2);
	printf("O valor de num3 = %d\n", n.num3);
	printf("O valor de num4 = %d\n", n.num4);
	printf("O valor de num5 = %d\n", n.num5);

	printf("O espaco em memoria de 'n' e %ld bytes\n", sizeof(n));
	printf("Soma: %d\n", soma);
	printf("Memoria total ocupada %ld bytes\n", (sizeof(n)+sizeof(soma)));

	return 0;
}
