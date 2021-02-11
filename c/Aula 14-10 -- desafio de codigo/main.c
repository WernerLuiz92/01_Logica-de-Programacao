#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp;

    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%d", &temp);

    printf("A temperatura em Celcius e de %d C", (5 * (temp-32) / 9));

    return 0;
}
