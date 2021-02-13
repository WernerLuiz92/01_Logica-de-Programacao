//Exerc�cio 2: Escreva um programa em C que, atrav�s da leitura de um
//n�mero fornecido pelo usu�rio, indique se este n�mero � primo.
//Lembrando: a condi��o para um n�mero ser considerado primo � que este
//seja divis�vel somente por ele mesmo e por 1.
//Um exemplo de n�mero primo � o n�mero 11.

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
