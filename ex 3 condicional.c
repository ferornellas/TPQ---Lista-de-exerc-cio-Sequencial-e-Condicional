#include <stdio.h>

int main()
{
    float numero;
    printf("\nDigite um numero:\n");
    scanf("%f", &numero);
    if (numero > 0)
        printf("\nO numero %.2f é positivo.\n", numero);
    else if (numero < 0)
        printf("\nO numero %.2f é negativo.\n", numero);
    else
        printf("\nO numero é nulo.\n");

    return 0;
}
