/*Implemente um menu que se repete ( do-while com switch ) até o usuário escolher
0 :
===== CONVERSOES =====
1 - Decimal para binario
2 - Binario para decimal
3 - Tabela Celsius -> Fahrenheit
0 - Sair
Opcao:
1. Leia um inteiro não negativo e exiba sua representação binária (sem vetores:
monte o resultado como um número inteiro formado por dígitos 0 e 1, por
exemplo, 13 → 1101).
2. Leia um número formado apenas por dígitos 0 e 1 (ex.: 1101 ) e exiba
seu valor decimal. Se houver algum dígito diferente de 0 ou 1, informe
Número binário inválido .
3. Leia uma temperatura inicial, uma final e um passo (positivo) e exiba a tabela
de conversão F =
9
5C + 32.

Opção inexistente deve exibir Opção inválida! e retornar ao menu.*/


#include <stdio.h>

void main() {
    int num, aux, binario, casa, op;
    int decimal, resto, potencia, valido;
    float inicio, fim, passo, c, f;

    do {
        printf("\n============ CONVERSOES ============\n");
        printf("1 - Decimal para binario\n");
        printf("2 - Binario para decimal\n");
        printf("3 - Tabela Celsius -> Fahrenheit\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch (op) {

            case 1:
                printf("\nInforme um numero inteiro nao negativo: ");
                scanf("%d", &num);

                if (num < 0) {
                    printf("Numero invalido!\n");
                    break;
                }

                binario = 0;
                casa = 1;
                aux = num;

                if (num == 0) {
                    binario = 0;
                }

                while (aux > 0) {
                    binario += (aux % 2) * casa;
                    casa *= 10;
                    aux = aux / 2;
                }

                printf("Binario = %d\n", binario);
                break;

            case 2:
                printf("\nInforme um numero binario: ");
                scanf("%d", &num);

                aux = num;
                decimal = 0;
                potencia = 1;
                valido = 1;

                if (num < 0) {
                    valido = 0;
                }

                while (aux > 0) {
                    resto = aux % 10;

                    if (resto != 0 && resto != 1) {
                        valido = 0;
                        break;
                    }

                    decimal += resto * potencia;
                    potencia *= 2;
                    aux = aux / 10;
                }

                if (valido == 1) {
                    printf("Decimal = %d\n", decimal);
                }
                else {
                    printf("Numero binario invalido!\n");
                }

                break;

            case 3:
                printf("\nTemperatura inicial: ");
                scanf("%f", &inicio);

                printf("Temperatura final: ");
                scanf("%f", &fim);

                printf("Passo: ");
                scanf("%f", &passo);

                if (passo <= 0 || inicio > fim) {
                    printf("Valores invalidos!\n");
                    break;
                }

                printf("\nCelsius\tFahrenheit\n");

                for (c = inicio; c <= fim; c += passo) {
                    f = (9.0 / 5.0) * c + 32;
                    printf("%.2f\t%.2f\n", c, f);
                }

                break;

            case 0:
                break;

            default:
                printf("\nOpcao invalida!\n");
                break;
        }
    } while (op != 0);
}
