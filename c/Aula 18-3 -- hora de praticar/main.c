//Exercício 3: Escreva um programa em C que consiga calcular o
//imposto sobre terrenos em uma determinada região. Nesta região,
//o imposto sobre terrenos é calculado a partir da área total do
//terreno (em m²) e a área construída do terreno (também em m²);
//sendo que para cada m² construído são cobrados R$ 5,00 e para
//cada m² não construído são cobrados R$ 3,80.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float areaConstruida, areaTotal, impostoAreaConstruida, impostoTerreno, impostoTotal;

    printf("Informe a area total do terreno: ");
    scanf("%f", &areaTotal);

    printf("Informe a area construida: ");
    scanf("%f", &areaConstruida);

    impostoTerreno = (areaTotal - areaConstruida) * 3.8;
    impostoAreaConstruida = areaConstruida * 5;
    impostoTotal = impostoAreaConstruida + impostoTerreno;

    printf("O valor do imposto sobre o terreno e: %.2f \n", impostoTerreno);
    printf("O valor do imposto sobre a area construida e: %.2f \n", impostoAreaConstruida);
    printf("O valor do imposto total e: %.2f \n\n", impostoTotal);

    return 0;
}
