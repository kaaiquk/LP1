/*Leia um inteiro N (1 ≤ N ≤ 20, validando a entrada) e desenhe as duas figuras
abaixo (exemplo para N = 4): à esquerda, uma pirâmide centralizada de asteriscos;
à direita, o triângulo de Floyd, com N linhas.

Dica: na linha i da pirâmide há N − i espaços e 2i − 1 asteriscos.*/

#include <stdio.h>

void main (){
  int N, espacos, asteriscos, i, j, k, num=1;

  printf("Digite um numero inteiro: ");
  scanf("%d", &N);

  for (i = 1; i <= N; i++) {

    espacos = N - i;
    asteriscos = 2 * i - 1;

    printf("\n");
    
    for (int j = 0; j < espacos; j++) {
      printf(" ");
    }

    for (j = 0; j < asteriscos; j++) {
      printf("*");
    }

    for (int j = 0; j < espacos; j++) {
      printf(" ");
    }

    printf("    ");

    for (int k = 1; k <= i; k++) {
      printf("%d ", num);
      num++;
    }
  }
}