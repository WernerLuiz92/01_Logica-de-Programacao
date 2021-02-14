#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdAportes, i;
    float porcentagemJuros;

    printf("Informe a quantidade de aportes: ");
    scanf("%d", &qtdAportes);

    printf("Informe a porcentagem de juros: ");
    scanf("%f", &porcentagemJuros);

    float valorAporte[qtdAportes];
    float total = 0;

    for (i = 0; i < qtdAportes; i++){
        printf("Informe o aporte do mes %d: ", i + 1);
        scanf("%f", &valorAporte[i]);
    }

    for (i = 0; i < qtdAportes; i++){

        if (i == 0){
            printf("Saldo anterior: R$ %.2f ", total);
            printf("| Juros: R$ %.2f ", total * ((porcentagemJuros)/100));
            printf("| Aporte do mes: R$ %.2f ", valorAporte[i]);
            total += valorAporte[i];
            printf("| Total: R$ %.2f \n", total);
        } else {
            printf("Saldo anterior: R$ %.2f ", total);
            printf("| Juros: R$ %.2f ", total * ((porcentagemJuros)/100));
            printf("| Aporte do mes: R$ %.2f ", valorAporte[i]);
            total += (total * ((porcentagemJuros)/100)) + valorAporte[i];
            printf("| Total: R$ %.2f \n", total);
        }

    }



    return 0;
}
