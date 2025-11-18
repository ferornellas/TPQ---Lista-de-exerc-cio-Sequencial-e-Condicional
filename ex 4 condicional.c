#include <stdio.h>  

int main()
{ 
    int variavel_A, variavel_B, variavel_C;
    printf("Digite o valor da variavel A: ");
    scanf("%d", &variavel_A);
    printf("Digite o valor da variavel B: ");
    scanf("%d", &variavel_B);
    printf("Digite o valor da variavel C: ");
    scanf("%d", &variavel_C); 

    if (variavel_A < variavel_B && variavel_A < variavel_C){
        if (variavel_B < variavel_C){
            printf("Ordem crescente: %d, %d, %d", variavel_A, variavel_B, variavel_C);  
        }
        else {
            printf("Ordem crescente: %d, %d, %d", variavel_A, variavel_C, variavel_B);  
        }
    }
    else if (variavel_B < variavel_C){
        if (variavel_A < variavel_C){
            printf("Ordem crescente: %d, %d, %d", variavel_B, variavel_A, variavel_C);  
        }
        else {
            printf("Ordem crescente: %d, %d, %d", variavel_B, variavel_C, variavel_B);
        }
    }
    else {
        if (variavel_A < variavel_B){
        printf("Ordem crescente: %d, %d, %d", variavel_C, variavel_A, variavel_B);
        }
        else {
        printf("Ordem crescente: %d, %d, %d", variavel_C, variavel_B, variavel_A);
        }
    }

    return 0;
}