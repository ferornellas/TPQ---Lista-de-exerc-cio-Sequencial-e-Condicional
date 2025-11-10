#include <stdio.h>
int main()
{
    int numeroInteiro;
    printf("\nDigite um numero inteiro:\n");
    scanf("%d", &numeroInteiro);
    if (numeroInteiro % 5 == 0)
    {
        printf("\nO numero %d é divisível por 5.\n", numeroInteiro);
    }
    else
    {
        printf("\nO numero %d não é divisível por 5.\n", numeroInteiro);
    }

    return 0;
}