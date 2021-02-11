#include <stdio.h>
#include <stdlib.h>

void main() {
    char nome[50];
    int valor;

    scanf("%s", &nome);
    scanf("%d", &valor);

    printf("Parabens %s voce economizou %d reais.", nome, valor);

    return 0;
}
