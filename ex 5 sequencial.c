#include <stdio.h>

int main()
{
    int numero, antecessor, sucessor;
    printf("\nDigite um numero:\n");
    scanf("%d", &numero);
    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("\nAntecessor:%d \nSucessor:%d", antecessor, sucessor);

    return 0;
}