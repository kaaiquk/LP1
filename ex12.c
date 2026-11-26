/*Leia dois inteiros positivos (repita a leitura enquanto algum deles for ≤ 0). Calcule
o MDC pelo algoritmo de Euclides — enquanto o resto da divisão de a por b não for zero, faça a ← b e b ← resto — e, depois, o MMC, usando a relação MMC(a, b) =
a · b
MDC(a, b)

. Mostre também quantas iterações o algoritmo executou.*/

#include <stdio.h>

void main() {
    int a, b, resto, mdc, mmc, cont = 0, num1, num2;

    do {
        printf("Informe dois numeros inteiros positivos: ");
        scanf("%d %d", &a, &b);

        if (a <= 0 || b <= 0) {
            printf("Numeros invalidos! Tente novamente.\n");
        }

    } while (a <= 0 || b <= 0);

    num1 = a;
    num2 = b;

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
        cont++;
    }

    mdc = a;
    mmc = (num1 * num2) / mdc;

    printf("\nMDC = %d", mdc);
    printf("\nMMC = %d", mmc);
    printf("\nIterações = %d\n", cont);
}
