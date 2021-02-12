//Exercício 4: Escreva um programa em C que faça com que um gato dê um miado
//com uma intensidade informada pelo usuário. Enquanto o usuário não digitar “PARAR”,
//o personagem deverá continuar solicitado “níveis de miado” e os emitindo no nível
//pedido pelo usuário. Considere como intensidade do miado a quantidade de letras “I”
//na palavra “MIAU”. Por exemplo, se o usuário informar 6 como intensidade, deverá ser
//escrito “MIIIIIIAU”; se o usuário informar 3 como intensidade, deverá ser escrito “MIIIAU”.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int intensidade, i;
    char repetir[3];

    do {
        printf("Qual a intensidade do miado? ");
        scanf("%d", &intensidade);

        printf("M");
        for (i = 0; i < intensidade; i++){
            printf("I");
        }
        printf("AU\n");

        printf("Deseja repetir? <SIM> ou <NAO> \n");
        scanf("%s", &repetir);
    } while (strcmp(&repetir, "NAO") != 0);


    return 0;
}
