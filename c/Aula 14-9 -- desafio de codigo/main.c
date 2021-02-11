#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anos;

    printf("Informe sua idade em anos: ");
    scanf("%d", &anos);

    printf("Sua idade em dias e: %d", anos * 365);

    return 0;
}
