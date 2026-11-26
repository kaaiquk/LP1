/*A série de Leibniz converge para π/4:
S = 1 −
1
3
+
1
5
−
1
7
+
1
9
− · · ·

a) Leia N e calcule 4S usando os N primeiros termos (use for ; alterne o sinal
sem usar pow ).
b) Usando while , descubra quantos termos são necessários para que |4S − π| <
0,001 (use π ≈ 3,14159265358979). Por que aqui while é mais adequado que
for ?*/

//a)
#include <stdio.h>

void main() {
    int N, i;
    double soma = 0, sinal = 1;

    printf("Digite N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        soma = soma + sinal / (2 * i - 1);
        sinal = sinal * (-1);
    }

    printf("Valor aproximado de PI: %lf\n", 4 * soma);

//b)
    int i2 = 1;
    double soma2 = 0, sinal2 = 1;
    double pi = 3.14159265358979;

    while ((4 * soma2 - pi >= 0.001) || (4 * soma2 - pi <= -0.001)) {
        soma2 = soma2 + sinal2 / (2 * i2 - 1);
        sinal2 = sinal2 * (-1);
        i2++;
    }

    printf("\nQuantidade de termos: %d\n", i2 - 1);
    printf("Valor aproximado de PI: %lf", 4 * soma2);
}

//A estrutura de repetição While é mais adequada pra resolver a letra b) visto que não temos uma quantidade N para podermos limitar como fazemos no For, então o While vai executar até conseguir concluir a condição.