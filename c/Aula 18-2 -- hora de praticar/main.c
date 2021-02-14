//Exercício 2: Escreva um programa em C que, a partir da leitura das medidas
//dos lados de um retângulo (comprimento e largura) calcule e informe a área
//e o perímetro do retângulo. Lembre-se: a área de um retângulo é definida por
//comprimento * altura e o perímetro é definido por 2 * comprimento + 2 * altura.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float comprimento, largura, area, perimetro;

    printf("Informe o comprimento: ");
    scanf("%f", &comprimento);
    printf("Informe a largura: ");
    scanf("%f", &largura);

    area = comprimento * largura;
    perimetro = (2 * comprimento) + (2 * largura);

    printf("A area do retangulo e: %.2f Metros quadrados \n", area);
    printf("O perimetro do retangulo e: %.2f Metros \n", perimetro);

    return 0;
}
