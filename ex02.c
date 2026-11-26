//Leia um mês (1–12) e um ano e informe quantos dias aquele mês possui. Use switch, aproveitando o fall-through, para agrupar os meses de 30 e 31 dias. Para fevereiro, considere que um ano é bissexto se for divisível por 4 e não por 100, ou se for divisível por 400. Valide o mês (mês inválido deve gerar mensagem de erro).

#include <stdio.h>

void main (){
    int mes, ano;

    printf("Informe mês e ano: ");
    scanf("%d %d", &mes, &ano);

    switch(mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("\n31 dias");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("\n30 dias");
            break;
        case 2:
            if ((ano % 4 == 0 && ano % 100 != 0)
                || ano % 400 == 0) {
                printf("\n29 dias");
            } else {
                printf("\n28 dias");
            }
            break;
    }
}