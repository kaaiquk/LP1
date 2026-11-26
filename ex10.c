//Leia um inteiro não negativo e, usando apenas os operadores / e % dentro de um laço, informe: a quantidade de dígitos, a soma dos dígitos, o número invertido e se ele é um palíndromo. Atenção ao número 0 , que possui 1 dígito.

#include <stdio.h>

void main(){
    int num, original, invertido, contdig, digito, soma;

    printf("Digite um numero inteiro não negativo: ");
    scanf("%d", &num);

    original = num;

    if (num==0){
        contdig = 1;
    }

    while (num > 0) {
        digito = num % 10;
        soma = soma + digito;
        invertido = invertido * 10 + digito;
        contdig = contdig + 1;
        num = num / 10;
    }

    printf("\nNumero: %d\n", original);
    printf("Digitos: %d | ", contdig);
    printf("Soma: %d\n", soma);
    printf("Invertido: %d | ", invertido);
    if (invertido==original){
        printf("Palindromo");
    } else{
        printf("Não palindromo");
    }
}