#include <stdio.h>

int main()
{
    int anoNascimento, anoAtual, anos, meses, dias, semanas;
    printf("\nDigite o ano em que você nasceu:\n");
    scanf("%d", &anoNascimento);
    printf("\nDigite o ano atual:\n");
    scanf("%d", &anoAtual);

    anos = anoAtual - anoNascimento;
    meses = anos * 12;
    dias = anos * 365;
    semanas = dias / 7;

    printf("\nVocê tem %d anos, %d meses, %d dias e %d semanas.\n", anos, meses, dias, semanas);

    return 0;
}