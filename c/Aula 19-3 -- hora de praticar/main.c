//Exerc�cio 3: Escreva um programa em C que, atrav�s da leitura
//de um n�mero fornecido pelo usu�rio, gere a sequ�ncia de Fibonacci
//com a quantidade de termos indicada pelo usu�rio.
//A sequ�ncia de Fibonacci, basicamente, consiste na gera��o do n�mero
//seguinte atrav�s da soma dos dois n�meros anteriores...
//Por exemplo: 1, 1, 2 (1 + 1), 3 (1 + 2), 5 (3 + 2), e assim por diante.
//Por exemplo, se o usu�rio fornecer o n�mero 4, devem ser indicados os 4
//primeiros n�meros da sequ�ncia, que s�o 1, 1, 2 e 3.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;


    printf("Fibonacci de: ");
    scanf("%d", &n);

    int fibonacci[n];

    for (i = 0; i < n; i++){

        if (i == 0) {
            fibonacci[i] = 1;
        } else if (i == 1) {
            fibonacci[i] = fibonacci[i - 1];
        } else {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }

    }

    for (i = 0; i < n; i++){
        printf("%d", fibonacci[i]);
        if (i == (n - 1)){
            printf("...\n");
        } else {
            printf(", ");
        }
    }

    return 0;
}
