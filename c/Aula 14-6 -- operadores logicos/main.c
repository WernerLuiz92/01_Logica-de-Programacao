#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);


    // && E
    if ((num > 10) && (num < 20)) {
        printf("O numero e maior que 10 e menor que 20 \n");
        printf("Condicao E \n");
    }

    // || OU
    if ((num > 10) || (num < 20)) {
        printf("O numero e maior que 10 ou menor que 20 \n");
        printf("Condicao OU \n");
    }

    // ! NAO
    if (!(num > 10)) {
        printf("O numero e menor que 10 \n");
        printf("Condicao NAO \n");
    }


    return 0;
}
