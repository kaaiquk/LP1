//Leia três valores reais correspondentes aos lados de um triângulo. Verifique se eles podem formar um triângulo (cada lado deve ser positivo e menor que a soma dos outros dois). Em caso afirmativo, classifique-o quanto aos lados (equilátero, isósceles ou escaleno) e informe também se ele é retângulo (pelo teorema de Pitágoras). Caso contrário, exiba Não forma triângulo.

#include <stdio.h>
#include <math.h>

void main(){
    float a, b, c;

    printf("Digite as medidas dos lados de um triângulo:\n");
    printf("\na:");
    scanf("%f", a);
    printf("\nb:");
    scanf("%f", b);
    printf("\nc:");
    scanf("%f", c);

    if (a < (b + c) && b < (a + c) && c < (a + b)){
        if (a==b && b==c){
            printf("\n O triângulo é equilátero!");
        } else if (a!=b && b!=c && a!=c){
            printf("\nO triângulo é escaleno!");
            if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(a, 2) + pow(b, 2)){
                printf("\nO triângulo é retângulo!");
            }
        }
        else printf("\nO triângulo é isósceles!");
    }
    else printf("Não é um triângulo.");
}