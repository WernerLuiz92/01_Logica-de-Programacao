//Exerc�cio 5: Escreva um programa em C que emita o som de miados
//durante x vezes, quantidade de vezes esta que dever� ser informada
//previamente pelo usu�rio. Considere como emiss�o de um miado a escrita no
//Console da palavra �MIAU�.

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
