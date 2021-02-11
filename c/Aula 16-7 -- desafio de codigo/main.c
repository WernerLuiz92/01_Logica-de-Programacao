#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho, i, j;

    printf("Qual o tamanho da piramide? ");
    scanf("%d", &tamanho);

    for (i = 1; i <= tamanho; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 1; i <= tamanho; i++){
        for (j = tamanho; j > i; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
