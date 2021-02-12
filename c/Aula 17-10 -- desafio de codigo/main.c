#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdAportes, i;
    float porcentagemJuros;

    printf("Informe a quantidade de aportes: ");
    scanf("%d", &qtdAportes);

    printf("Informe a porcentagem de juros: ");
    scanf("%d", &porcentagemJuros);

    float valorAporte[qtdAportes];

    for (i = 0; i < qtdAportes; i++){
        printf("Informe o valor do aporte mes %d: ", i + 1);
        scanf("%f", &valorAporte[i]);
    }

    return 0;
}
