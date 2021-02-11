#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroDigitado = 0;
    printf("Por favor, digite um numero:");

    scanf("%d", &numeroDigitado);

    if (numeroDigitado > 10) {
        printf("Numero maior que 10");
    } else {
        printf("Numero menor ou igual a 10");
    }

    return 0;
}
