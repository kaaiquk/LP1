/*Dado um inteiro positivo n: se n for par, divida-o por 2; se for ímpar, faça 3n + 1.
Repita até chegar a 1.
a) Leia n, exiba a sequência completa e a quantidade de passos.
b) Usando laços aninhados, descubra qual número entre 1 e 100 gera a sequência
com mais passos e quantos passos ela tem.*/

#include <stdio.h>

void main(){
    int n, passos;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    printf("\n");

    while (n!=1){
        if (n%2==0){
            n = n/2;
            passos += 1;
            printf(" %d", n);
        } else if (n%2==1){
            n = 3*n + 1;
            passos += 1;
            printf(" %d", n);
        }
    }

    printf(" | Passos: %d\n", passos);

    int maiorpassos, nummaior, num = 1, n2, passos2 = 0;

    while (num!=101) {
        n2 = num;

        while (n2!=1) {
            if (n2%2==0) {
                n2 = n2/2;
                passos2++;
            } else if (n2%2==1) {
                n2 = 3*n2 + 1;
                passos2++;
            }

            if (num==1) {
                maiorpassos = passos2;
                nummaior=num;
            } else if (passos2>maiorpassos){
                maiorpassos = passos2;
                nummaior=num;
            }
        }
    passos2 = 0;
    num += 1;
    }

    printf("\nO número com mais passos é %d e ele dá %d passos", nummaior, maiorpassos);
}