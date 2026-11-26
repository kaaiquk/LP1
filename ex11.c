/*Leia dois inteiros A e B (se A > B, troque-os). Liste todos os números primos do
intervalo [A, B] e, ao final, informe quantos foram encontrados. Use laços aninhados:
o laço externo percorre o intervalo e o interno testa os divisores. Otimize o teste
interrompendo-o ( break ) assim que um divisor for encontrado e testando divisores
apenas até √n (condição d * d <= n ). Lembre-se: 0 e 1 não são primos.*/

#include <stdio.h>

void main() {
    int A, B, num, divisor, primo, qtde;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &A, &B);

    if (A > B) {
        num = A;
        A = B;
        B = num;
    }

    qtde = 0;

    printf("\nNumeros primos no intervalo:\n");

    for (num = A; num <= B; num++) {

        if (num < 2) {
            primo = 0;
        }
        else {
            primo = 1;

            for (divisor = 2; divisor * divisor <= num; divisor++) {

                if (num % divisor == 0) {
                    primo = 0;
                    break;
                }
            }
        }

        if (primo == 1) {
            printf("%d ", num);
            qtde++;
        }
    }

    printf("\n\nQuantidade de numeros primos: %d\n", qtde);
}
