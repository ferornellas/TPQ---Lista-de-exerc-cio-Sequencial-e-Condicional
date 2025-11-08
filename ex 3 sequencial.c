#include <stdio.h>

int main(){
    double cep, telefone, cpf, rg; 
    printf("\nDigite o cep:\n"); 
    scanf("%lf", &cep); 
    printf("\nDigite o telefone:\n"); 
    scanf("%lf",&telefone); 
    printf("\nDigite o cpf:\n"); 
    scanf("%lf", &cpf);
    printf("\nDigite o rg:\n"); 
    scanf("%lf", &rg); 

    printf("\n cep: %.0lf \n telefone: %.0lf \n cpf: %.0lf \n rg: %.0lf \n", cep, telefone, cpf, rg);




    return 0;
}