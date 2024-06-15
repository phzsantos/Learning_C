#include <stdio.h>
#include <time.h>

// clock - retorna o tempo de execução do programa
// CLOCKS_PER_SEC - retorna o número de clocks por segundo
// time - retorna o tempo em segundos desde 1 de janeiro de 1970
// localtime - converte o tempo em segundos para uma estrutura de tempo
// asctime - converte a estrutura de tempo para uma string

int main()
{
    long int inicio_t, fim_t, total_t;

    inicio_t = clock();
    printf("Inicio: %ld\n", inicio_t);

    printf("Realizar um loop grande, inicio_t = %ld\n", inicio_t);
    for (int i = 0; i < 100000000; i++){}

    fim_t = clock();
    printf("Fim: %ld\n", fim_t);

    total_t = (double)(fim_t - inicio_t) / CLOCKS_PER_SEC;

    printf("clocks per sec: %ld\n", CLOCKS_PER_SEC);

    printf("Tempo de execução: %ld\n", total_t);

    time_t segundos;

    segundos = time(NULL);

    printf("Horas desde 1 de janeiro de 1970 = %ld\n", segundos/3600);

    time_t tempoBruto;
    struct tm *info;

    time(&tempoBruto);

    info = localtime(&tempoBruto);

    printf("Data e hora atual: %s", asctime(info));

    return 0;
}