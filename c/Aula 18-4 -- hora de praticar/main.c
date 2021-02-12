//Exerc�cio 4: Escreva um programa em C que fa�a com que um gato d� um miado
//com uma intensidade informada pelo usu�rio. Enquanto o usu�rio n�o digitar �PARAR�,
//o personagem dever� continuar solicitado �n�veis de miado� e os emitindo no n�vel
//pedido pelo usu�rio. Considere como intensidade do miado a quantidade de letras �I�
//na palavra �MIAU�. Por exemplo, se o usu�rio informar 6 como intensidade, dever� ser
//escrito �MIIIIIIAU�; se o usu�rio informar 3 como intensidade, dever� ser escrito �MIIIAU�.

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
