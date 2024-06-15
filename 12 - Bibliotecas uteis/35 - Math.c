#include <stdio.h>
#include <math.h>

// cos - calcula o cosseno de um ângulo em radianos
// sin - calcula o seno de um ângulo em radianos
// tan - calcula a tangente de um ângulo em radianos
// cosh - calcula o cosseno hiperbólico de um ângulo em radianos
// sinh - calcula o seno hiperbólico de um ângulo em radianos
// tanh - calcula a tangente hiperbólica de um ângulo em radianos
// exp - calcula o exponencial de um número
// log - calcula o logaritmo natural de um número
// log10 - calcula o logaritmo na base 10 de um número
// pow - calcula a potência de um número
// sqrt - calcula a raiz quadrada de um número
// ceil - arredonda um número para cima
// floor - arredonda um número para baixo

int main()
{
    int angulo = 45;

    float cosseno = cos(angulo);
    float seno = sin(angulo);
    float tangente = tan(angulo);

    float cossenoHiperbolico = cosh(angulo);
    float senoHiperbolico = sinh(angulo);
    float tangenteHiperbolica = tanh(angulo);

    printf("O cosseno de %d é %f\n", angulo, cosseno);
    printf("O seno de %d é %f\n", angulo, seno);
    printf("A tangente de %d é %f\n", angulo, tangente);

    printf("O cosseno hiperbólico de %d é %f\n", angulo, cossenoHiperbolico);
    printf("O seno hiperbólico de %d é %f\n", angulo, senoHiperbolico);
    printf("A tangente hiperbólica de %d é %f\n", angulo, tangenteHiperbolica);

    double a = 0, b = 1, c = 2;

    printf("O exponencial de %f é %f\n", a, exp(a));
    printf("O exponencial de %f é %f\n", b, exp(b));
    printf("O exponencial de %f é %f\n", c, exp(c));

    int valor = 42;

    printf("O logaritmo natural de %d é %f\n", valor, log(valor));

    printf("O logaritmo na base 10 de %d é %f\n", valor, log10(valor));

    a = 3, b = 2;

    printf("%f elevado a %f é %f\n", a, b, pow(a, b));

    a = 9;

    printf("A raiz quadrada de %f é %f\n", a, sqrt(a));

    a = 4.67891;

    printf("O arredondamento de %f para cima é %f\n", a, ceil(a));
    
    printf("O arredondamento de %f para baixo é %f\n", a, floor(a));

    return 0;
}