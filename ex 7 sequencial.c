#include <stdio.h>

int main()
{
    float pe, jarda, milha;
    printf("\nInforme o valor em pes:\n");
    scanf("%f", &pe);
    jarda = pe * 3;
    milha = jarda / 1760;
    printf("\nO valor em jardas e milhas e: %.0f jardas e %.4f milhas\n", jarda, milha);

    return 0;
}
