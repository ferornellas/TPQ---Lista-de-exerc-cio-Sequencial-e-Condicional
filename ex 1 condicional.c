#include <stdio.h>

int main()
{
    int numero1, numero2;
    printf("\nDigite o primeiro numero:\n");
    scanf("%d", &numero1);
    printf("\nDigite o segundo numero:\n");
    scanf("%d", &numero2);
    if (numero1 > numero2)
        printf("O maior numero é: %d\n", numero1);
    else if (numero2 > numero1)
        printf("O maior numero é: %d\n", numero2);
    else
        printf("Os dois numeros são iguais: %d\n", numero1);

    return 0;
}