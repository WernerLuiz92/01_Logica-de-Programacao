#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Tabuada! \n");

    printf("Informe qual tabuada deseja: ");
    scanf("%d", &numero);

    printf("\n");

    for (int i = 1; i <= 10; i++ ) {
        printf("%d X %d = %d \n", numero, i, numero * i);
    }
    return 0;
}
