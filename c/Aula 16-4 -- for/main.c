#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab;

    printf("Tabuada! \n");

    printf("Informe qual tabuada deseja: ");
    scanf("%d", &tab);

    printf("\n");

    for (int i = 0; i <= 10; i++ ) {
        printf("%d X %d = %d \n", tab, i, tab * i);
    }
    return 0;
}
