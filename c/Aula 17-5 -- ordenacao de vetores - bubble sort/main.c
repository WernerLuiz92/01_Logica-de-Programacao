#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bubble sort \n");

    int vetor[5];
    int i, numero, alteracoes, temporario = 0;

    for (i = 0; i < 5; i++){
        printf("Digite um número para entrar no vetor: ");
        scanf("%d", &numero);
        vetor[i] = numero;
    }

    printf("Vetor antes da ordenação: \n");
    for (i = 0; i < 5; i++){
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    printf("\n");

    alteracoes = 1; //Força o algoritmo a executar a ordenação pelo menos uma vez.

    while (alteracoes > 0){
        alteracoes = 0;
        for (i = 0; i < 4; i++){
            if (vetor[i] > vetor[i + 1]){
                temporario = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = temporario;

                alteracoes = alteracoes + 1;
            }
        }
    }

    printf("Vetor após a ordenação: \n");
    for (i = 0; i < 5; i++){
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    printf("\n");


    return 0;
}
