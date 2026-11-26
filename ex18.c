/*O computador sorteia um número secreto entre 1 e 100 (use srand(time(NULL)) e
rand() % 100 + 1 , incluindo <stdlib.h> e <time.h>). O jogador tem no máximo 7
tentativas; a cada palpite o programa informa Maior , Menor ou Acertou! . Palpites
fora de [1, 100] não contam como tentativa. Ao final, revele o número (se o jogador
perdeu) e pergunte se deseja jogar novamente. Exiba, ao sair, quantas partidas foram
jogadas e quantas foram vencidas.*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int val, num, tent;
    int partida = 0, venc = 0;
    int acertou;
    char resp;

    srand(time(NULL));

    do {
        val = rand() % 100 + 1;
        tent = 7;
        acertou = 0;
        partida++;

        printf("\n========================================");
        printf("\nAdivinhe um numero de 1 a 100!");
        printf("\n========================================\n");

        while (tent > 0) {

            printf("\nDigite seu palpite: ");
            scanf("%d", &num);

            if (num < 1 || num > 100) {
                printf("Palpite invalido! Digite entre 1 e 100.\n");
                continue;
            }

            tent--;

            if (num < val) {
                printf("Maior!\n");
            }
            else if (num > val) {
                printf("Menor!\n");
            }
            else {
                printf("\nAcertou!\n");
                acertou = 1;
                venc++;
                break;
            }

            printf("%d tentativa(s) restantes!\n", tent);
        }

        if (acertou == 0) {
            printf("\n=========================");
            printf("\nVocê perdeu!");
            printf("\nO numero era: %d", val);
            printf("\n=========================\n");
        }

        printf("\nQuer jogar novamente? (S/N): ");
        scanf(" %c", &resp);

    } while (resp == 'S' || resp == 's');

    printf("\n========================================");
    printf("\n             RESULTADOS");
    printf("\n========================================");
    printf("\nPartidas jogadas: %d", partida);
    printf("\nPartidas vencidas: %d", venc);
    printf("\n========================================\n");
}