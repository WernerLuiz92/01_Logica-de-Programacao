//Exercício 2: Escreva um programa em C que, através da leitura de um
//número fornecido pelo usuário, indique se este número é primo.
//Lembrando: a condição para um número ser considerado primo é que este
//seja divisível somente por ele mesmo e por 1.
//Um exemplo de número primo é o número 11.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, divisores, i;

    printf("Qual numero deseja verifica se e primo? ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        if ((num % i) == 0){
            divisores++;
        }
    }

    if (divisores == 2){
        printf("O numero %d tem %d divisores e por isso e primo!", num, divisores);
    } else {
        printf("O numero %d tem %d divisores e nao e primo!", num, divisores);
    }

    return 0;
}
