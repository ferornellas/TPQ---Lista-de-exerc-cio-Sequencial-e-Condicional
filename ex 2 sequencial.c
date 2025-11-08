#include <stdio.h>

int main(){
    int numero1, numero2, soma, subtracao, multiplicacao, divisao; 
    printf("\nDigite o numero 1:\n");
    scanf("%d",&numero1); 
    printf("\nDigite o numero 2:\n"); 
    scanf("%d",&numero2); 
    soma = numero1 + numero2; 
    subtracao = numero1 - numero2; 
    multiplicacao = numero1 * numero2; 
    divisao = numero1/numero2; 

    printf("\nA soma dos numeros 1 e 2 eh:\n %d", soma); 
    printf("\nA subtracao dos numeros 1 e 2 eh:\n %d", subtracao); 
    printf("\nA multiplicacao dos numeros 1 e 2 eh:\n %d", multiplicacao); 
    printf("\nA divisao dos numeros 1 e 2 eh:\n %d", divisao); 

    return 0;
}