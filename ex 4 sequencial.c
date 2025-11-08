#include <stdio.h>

int main()
{
    int variavelA, variavelB, variavelC;
    printf("\nDigite variavel A:\n");
    scanf("%d", &variavelA);
    printf("\nDigite variavel B:\n");
    scanf("%d", &variavelB);
    variavelC = variavelA;
    variavelA = variavelB;
    variavelB = variavelC;

    printf("\nVariavel A: %d\nVariavel B: %d", variavelA, variavelB);

    return 0;
}