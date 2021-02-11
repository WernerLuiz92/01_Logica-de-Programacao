#include <stdio.h>
#include <stdlib.h>

int main() {
    int essenciais, prioridades, estiloDeVida;

    scanf("%d", &essenciais);
    scanf("%d", &prioridades);
    scanf("%d", &estiloDeVida);

    if (essenciais <= 50) {
        printf("Gastos essenciais: dentro da regra");
    } else {
        printf("Gastos essenciais: acima da regra");
    }
    if (prioridades <= 15) {
        printf("Prioridades financeiras: dentro da regra");
    } else {
        printf("Prioridades financeiras: acima da regra");
    }
    if (essenciais <= 35) {
        printf("Estilo de vida: dentro da regra");
    } else {
        printf("Estilo de vida: acima da regra");
    }

    return 0;
}
