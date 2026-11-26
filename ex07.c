//Leia um inteiro N e exiba sua tabuada de 1 a 10 no formato 7 x 3 = 21 (use %2d e %3d para alinhar). Escreva três versões no mesmo programa: uma com for , uma com while e uma com do-while . Em comentário, explique em que situação do-while e while se comportariam de forma diferente.

#include <stdio.h>

void main (){
  //estrutura de repetição FOR
  int cont, num;

  printf("Digite um número para saber sua tabuada: ");
  scanf("%d", num);

  for (cont = 1; cont <= 10; cont++) {
    printf("\n%d x %d = %d", num, cont, num*cont);
  }
  
  //estrutura de repetição WHILE
  int cont = 1, num;

  printf("Digite um número para saber sua tabuada: ");
  scanf("%d", num);

  while (cont <= 10) {
    printf("\n%d x %d = %d", num, cont, num*cont);
    cont++;
  }
  
  //estrutura de repetição DO-WHILE
  int cont = 1, num;

  printf("Digite um número para saber sua tabuada: ");
  scanf("%d", num);

  do {
    printf("\n%d x %d = %d", num, cont, num*cont);
    cont++;
  } while (cont <= 10);
}

//existe uma situação onde a estrutura de repetição WHILE pode não executar, mas o DO-WHILE executa ao menos 1 vez