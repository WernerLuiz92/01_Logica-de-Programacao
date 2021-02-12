//Exercício 5: Escreva um programa em C que emita o som de miados
//durante x vezes, quantidade de vezes esta que deverá ser informada
//previamente pelo usuário. Considere como emissão de um miado a escrita no
//Console da palavra “MIAU”.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int miar, i;

    printf("Quantas vezes? ");
    scanf("%d", &miar);

    for (i = 0; i < miar; i++){
        printf("MIAU \n");
    }

    return 0;
}
