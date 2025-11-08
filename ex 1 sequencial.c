#include <stdio.h>

int main()
{
    int numero1, numero2, divisao, resto;
    printf("\nDigite o numero 1:\n");
    scanf("%d",&numero1);
    printf("\nDigite o numero 2:\n");
    scanf("%d",&numero2);
    divisao = numero1/numero2; 
    resto = numero1%numero2; 
    printf("\nO resultado da divisao dos dois numeros eh: %d ",divisao); 
    printf("\nO resultado do resto da divisao eh: %d ",resto); 
    

    return 0;
}
