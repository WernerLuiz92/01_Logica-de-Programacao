#include <stdio.h>
#include <stdlib.h>

void main() {
    char letra;

    printf("Escreva uma Letra: ");
    scanf("%c", &letra);
        // Enquanto o usu�rio n�o apertar ENTER, o console aguardar� o usu�rio terminar a digita��o.
        // Quando ENTER for pressionado, o scanf() far� a leitura e transportar� o valor lido para a vari�vel apontada
    printf("A letra digitada e: %c \n", letra);
    printf("\n");


    printf("Escreva um Nome: ");
    char nome[50]; // Um nome de at� 50 caracteres
    scanf("%s", &nome);
    printf("O nome digitado e: %s \n", nome);
    printf("\n");


    printf("Escreva um Numero inteiro: ");
    int numero = 0;
    scanf("%d", &numero);
    printf("O numero digitado e: %d \n", numero);
    printf("\n");


    printf("Escreva um Numero real: ");
    float numeroQuebrado = 0;
    scanf("%f", &numeroQuebrado);
    printf("O numero digitado e: %.2f \n", numeroQuebrado);
    printf("\n");
}
