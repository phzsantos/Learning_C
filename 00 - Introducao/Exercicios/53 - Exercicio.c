#include <stdio.h>

int main()
{
	double comprimento, largura, perimetro, preco_tela, valor_cercar;

	printf("Digite o comprimento: ");
	scanf("%lf", &comprimento);
	printf("Digite o largura: ");
	scanf("%lf", &largura);
	printf("Digite o preco da tela: ");
	scanf("%lf", &preco_tela);

	perimetro = (largura + comprimento) * 2;
	valor_cercar = perimetro * preco_tela;

	printf("Valor para cercar o terreno: %.2lf", valor_cercar);

	return 0;
}
