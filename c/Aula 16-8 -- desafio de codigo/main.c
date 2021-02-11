#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numDeParcelas;
    float parcela, parcelaInicial, porcentagemDecrecimo, decrecimo;

    printf("Informe a quantidade de parcelas: ");
    scanf("%d", &numDeParcelas);
    printf("\n");

    printf("Informe o valor da parcela inicial: ");
    scanf("%f", &parcelaInicial);
    printf("\n");

    printf("Informe a porcentagem de decrecimo: ");
    scanf("%f", &porcentagemDecrecimo);
    printf("\n");

    decrecimo = (porcentagemDecrecimo / 100);
    parcela = parcelaInicial;

    for (int i = 1; i <= numDeParcelas; i++){
        if (i > 1){
            parcela = parcela - (parcela * decrecimo);
            printf("Parcela %d de %d: R$ %.2f \n", i, numDeParcelas, parcela);
        } else {
            printf("Parcela %d de %d: R$ %.2f \n", i, numDeParcelas, parcelaInicial);
        }
    }

    return 0;
}
