#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, maior;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
        maior = numero1;
        printf("O maior numero entre %d e %d e o: %d", numero1, numero2, maior);
    } else if (numero1 < numero2) {
        maior = numero2;
        printf("O maior numero entre %d e %d e o: %d", numero1, numero2, maior);
    } else {
        printf("Os dois numeros sao iguais!");
    }



    return 0;
}
