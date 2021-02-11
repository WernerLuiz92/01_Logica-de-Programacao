#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0;
    char nome[50];

    printf("Por favor informe o seu nome: ");
    scanf("%s", &nome);
    printf("\n");

    printf("Por favor informe a sua idade: ");
    scanf("%d", &idade);
    printf("\n");
    printf("\n");

    printf("Ola, %s a sua idade e: %d anos. \n", nome, idade);

    return 0;
}
