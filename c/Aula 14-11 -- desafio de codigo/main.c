#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, alimentacao, moradia, saude, outros;

    salario = 1500;
    alimentacao = 450;
    moradia = 600;
    saude = 150;
    outros = 300;

    printf("Alimentacao %.0f%% \n", (alimentacao * 100) / salario);
    printf("Moradia %.0f%% \n", (moradia * 100) / salario);
    printf("Saude %.0f%% \n", (saude * 100) / salario);
    printf("Outros %.0f%% \n", (outros * 100) / salario);

    return 0;
}
