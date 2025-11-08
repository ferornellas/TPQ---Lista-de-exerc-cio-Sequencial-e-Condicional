#include <stdio.h>

int main()
{
    float salarioBase, salarioAReceber, gratificacao = 0.2, imposto = 0.15;
    printf("\nInforme seu salario:\n");
    scanf("%f", &salarioBase);
    salarioAReceber = salarioBase + gratificacao * salarioBase - salarioBase * imposto;

    printf("\nSalario a receber:%.2f \n", salarioAReceber);

    return 0;
}