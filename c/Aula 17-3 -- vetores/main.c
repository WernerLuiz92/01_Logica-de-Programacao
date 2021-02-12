#include <stdio.h>
#include <stdlib.h>

int main()
{
    int address = 1;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &address);

    printf("\n");

    int numerosDigitados[address];

    for (int i = 0; i <= (address -1); i++){
        printf("Digite a posição %d: ", i);
        scanf("%d", &numerosDigitados[i]);
    }

    printf("\n");
    printf("O vetor é: \n");

    for (int i = 0; i <= (address -1); i++){
        printf("Vetor [%d]: %d \n", i, numerosDigitados[i]);
    }

    return 0;
}
