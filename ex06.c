//Leia três números inteiros e exiba-os em ordem crescente e, em seguida, em ordem decrescente, usando somente estruturas de seleção (sem laços e sem vetores). Informe também qual é o valor mediano. O programa deve funcionar corretamente quando houver valores repetidos.

#include <stdio.h>

void main (){
  int num1, num2, num3;

  printf("Digite 3 números inteiros: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1>num2 && num2>num3){
    printf("\nCrescente: %d %d %d", num3, num2, num1);
    printf("\nDecrescente: %d %d %d", num1, num2, num3);
    printf("\nMediano: %d", num2);
  } 
  else if (num1>num2 && num3>num2){
    printf("\nCrescente: %d %d %d", num2, num3, num1);
    printf("\nDecrescente: %d %d %d", num1, num3, num2);
    printf("\nMediano: %d", num3);
  } 
  else if (num2>num1 && num1>num3){
    printf("\nCrescente: %d %d %d", num3, num1, num2);
    printf("\nDecrescente: %d %d %d", num2, num1, num3);
    printf("\nMediano: %d", num1);
  } 
  else if (num2>num1 && num3>num1){
    printf("\nCrescente: %d %d %d", num1, num3, num2);
    printf("\nDecrescente: %d %d %d", num2, num3, num1);
    printf("\nMediano: %d", num3);
  } 
  else if (num3>num2 && num2>num1){
    printf("\nCrescente: %d %d %d", num1, num2, num3);
    printf("\nDecrescente: %d %d %d", num3, num2, num1);
    printf("\nMediano: %d", num2);
  } 
  else if (num3>num2 && num1>num2){
    printf("\nCrescente: %d %d %d", num2, num1, num3);
    printf("\nDecrescente: %d %d %d", num3, num1, num2);
    printf("\nMediano: %d", num1);
  } 
  else /*para números iguais*/ {
    printf("\nCrescente: %d %d %d", num3, num2, num1);
    printf("\nDecrescente: %d %d %d", num1, num2, num3);
    printf("\nMediano: %d", num2);
  }
}