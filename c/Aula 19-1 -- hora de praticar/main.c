//Exerc�cio 1: Escreva um programa em C que forne�a o fatorial de um
//n�mero fornecido pelo usu�rio. Para lembrar: por exemplo, o fatorial
//de 2 (2!) � igual 2 * 1, que � igual a 2. O fatorial de 4 (4!) �
//igual a 4 * 3 * 2 * 1, que � igual a 24.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f, i;

    printf("Informe o fatorial desejado: ");
    scanf("%d", &f);

    i = f;
    for (f = 1; i > 1; i--){
        f = f * i;
    }

    printf("%d", f);


    return 0;
}
