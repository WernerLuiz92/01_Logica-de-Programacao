#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Manipulação de strings

int main()
{
    char nome[50] = "";

    while (strcmp(&nome, "PARAR") != 0) { //strcmp da lib <string.h> para comparar se &nome == "PARAR"

        printf("Informe um nome: ");
        scanf("%s", &nome);

        if (strcmp(&nome, "PARAR") != 0) {

            printf("Ola, %s! Tudo bem? \n", &nome);
            printf("\n");

        } else {

            printf("Ate logo!");

        }
    }
    return 0;
}
