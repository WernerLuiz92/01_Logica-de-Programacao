#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdLinhas, i;
    float total = 0, totalItem = 0;

    printf("Informe a quantidade de itens: ");
    scanf("%d", &qtdLinhas);

    int codigos[qtdLinhas];
    int quantidades[qtdLinhas];

    for(i = 0; i < qtdLinhas; i++){
        printf("Codigo: ");
        scanf("%d", &codigos[i]);

        printf("Informe a quantidade: ");
        scanf("%d", &quantidades[i]);
        printf("\n");
    }

    printf("\n\n\n CUPOM FISCAL \n\n");

    //Emissão do cupom fiscal
    for (i = 0; i < qtdLinhas + 1; i++){
        if (i == qtdLinhas + 1){
            printf("Total - $.2f", total);
        } else {
            switch (codigos[i]){
            case 1:
                totalItem = quantidades[i] * 3.8;
                printf("Leite Integral x %d - %.2f \n", quantidades[i], totalItem);
                break;
            case 2:
                totalItem = quantidades[i] * 5.98;
                printf("Manteiga x %d - %.2f \n", quantidades[i], totalItem);
                break;
            case 3:
                totalItem = quantidades[i] * 8.25;
                printf("Cafe 500g x %d - %.2f \n", quantidades[i], totalItem);
                break;
            default:
                printf("Código Inválido");
                break;
            }
            total = total + totalItem;
        }
    }

    return 0;
}
