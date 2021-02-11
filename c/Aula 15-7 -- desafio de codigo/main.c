#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Corretor de Provas!\n");
    printf("\n");

    float p1, p2, p3, tf, media;
    char nome[50];

    printf("Informe o nome do aluno: ");
    scanf("%s", &nome);

    printf("Informa a nota da primeira prova: ");
    scanf("%f", &p1);

    printf("Informa a nota da segunda prova: ");
    scanf("%f", &p2);

    printf("Informa a nota da terceira prova: ");
    scanf("%f", &p3);

    printf("Informa a nota do trabalho final: ");
    scanf("%f", &tf);

    printf("\n");

    media = (p1 + (p2 * 2) + (p3 * 3) + tf) / 7;

    if (media < 6 ) {
        printf("O aluno %s, obteve media de %.2f pontos e conceito D", nome, media);
    } else if (media >= 6.5 && media < 7.5) {
        printf("O aluno %s, obteve media de %.2f pontos e conceito C", nome, media);
    } else if (media >= 7.5 && media < 9) {
        printf("O aluno %s, obteve media de %.2f pontos e conceito B", nome, media);
    } else if (media >= 9){
        printf("O aluno %s, obteve media de %.2f pontos e conceito A", nome, media);
    }

    return 0;
}
