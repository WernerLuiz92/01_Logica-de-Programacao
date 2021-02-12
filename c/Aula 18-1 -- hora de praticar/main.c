//Exercício 1: Escreva um programa em C que consiga ler um valor em dólares e
//devolva para o usuário este valor convertido em reais.
//Considere que US$ 1,00 = R$ 3,85.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorUSD, valorBRL, cotacao;

    printf("Informe um valor em $ dolares: ");
    scanf("%f", &valorUSD);

    printf("Informe a cotacao do dia: ");
    scanf("%f", &cotacao);

    valorBRL = valorUSD * cotacao;

    printf("\n\n");

    printf("O valor US$ %.2f e equivalente a R$ %.2f", valorUSD, valorBRL);
    return 0;
}
