#include <stdio.h>
#include <stdlib.h>

int main() {
    int codigoBarras;

    scanf("%d", &codigoBarras);

    switch (codigoBarras) {
        case 1:
            printf("Leite Integral - 3,80");
            break;
        case 2:
            printf("Manteiga - 5,98");
            break;
        case 3:
            printf("Caf� 500g - 8,25");
            break;
        default:
            printf("Produto n�o cadastrado");
            break;

    }

    return 0;
}
