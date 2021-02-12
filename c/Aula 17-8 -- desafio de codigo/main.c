#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdFamilias = 0, i;
    float soma = 0;

    printf("Quantas famílias foram entrevistadas? ");
    scanf("%d", &qtdFamilias);
    printf("\n");

    float rendaFamilias[qtdFamilias];

    for (i = 0; i < qtdFamilias; i++){
        printf("Informe a renda da família: ");
        scanf("%f", &rendaFamilias[i]);
    }

    printf("\n");

    //Ordena o array
    int alteracoes = 1;
    while (alteracoes > 0){
        alteracoes = 0;
        for (i = 0; i < (qtdFamilias -1); i++){
            if (rendaFamilias[i] > rendaFamilias[i + 1]){
                float temp = rendaFamilias[i];
                rendaFamilias[i] = rendaFamilias[i + 1];
                rendaFamilias[i + 1] = temp;

                alteracoes = alteracoes + 1;
            }
        }
    }

    printf("Rendas familiares em order crescente: \n");

    for (i = 0; i < qtdFamilias; i++){
        printf("Família %d - Renda: R$ %.2f \n", i + 1, rendaFamilias[i]);
    }

    printf("\n");

    //Calcula a média
    for (i = 0; i < qtdFamilias; i++){

        soma = soma + rendaFamilias[i];

    }

    float media = soma / qtdFamilias;

    printf("Média - %.2f \n", media);
    printf("Maior - %.2f \n", rendaFamilias[qtdFamilias - 1]);
    printf("Menor - %.2f \n", rendaFamilias[0]);


    return 0;
}
