/*Um caixa eletrônico possui notas de R$ 200, 100, 50, 20 e 10. Leia o valor do saque,
repetindo a leitura enquanto ele não for múltiplo de 10 ou estiver fora do intervalo
[10, 2000]. Exiba a quantidade mínima de notas de cada valor (mostre apenas as
notas utilizadas). Resolva usando laços — por exemplo, subtraindo o valor de cada
nota enquanto for possível — e não apenas divisões diretas.*/

#include <stdio.h>

void main (){
    int saque, aux, duzentos=0, cem=0, cinquenta=0, vinte=0, dez=0;

    do {
        printf("Digite um valor inteiro para saque: ");
        scanf("%d", &saque);
    } while (saque%10!=0 || saque<10 || saque>2000);

    aux=saque;

    while (aux!=0){
        if (aux>=200){
            duzentos+=1;
            aux-=200;
        }
        else if (aux>=100){
            cem+=1;
            aux-=100;
        }
        else if (aux>=50){
            cinquenta+=1;
            aux-=50;
        }
        else if (aux>=20){
            vinte+=1;
            aux-=20;
        }
        else if (aux>=10){
            dez+=1;
            aux-=10;
        }
    }

    printf("O saque de R$%d te dará:\n", saque);
    if (duzentos>=1){
        printf("\n%d nota(s) de R$200", duzentos);
    }
    if (cem>=1){
        printf("\n%d nota(s) de R$100", cem);
    }
    if (cinquenta>=1){
        printf("\n%d nota(s) de R$50", cinquenta);
    }
    if (vinte>=1){
        printf("\n%d nota(s) de R$20", vinte);
    }
    if (dez>=1){
        printf("\n%d nota(s) de R$10", dez);
    }
}