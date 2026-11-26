//Uma distribuidora (valores fictícios) cobra a energia por faixas progressivas: os primeiros 100 kWh custam R$ 0,60 cada; do 101.o ao 200.o kWh, R$ 0,75 cada; o que exceder 200 kWh custa R$ 0,90 cada. Sobre o total, aplica-se a bandeira tarifária: V (verde) sem acréscimo, A (amarela) +5% e R (vermelha) +10%. Leia o consumo e a letra da bandeira (aceite maiúscula ou minúscula, usando switch ) e mostre o valor da conta. Uma bandeira inválida deve gerar uma mensagem de erro.

#include <stdio.h>

void main (){
    float kwh, valor;
    char bandeira;

    printf("Digite a quantidade de kWh: ");
    scanf("%f", &kwh);

    printf("Informe a bandeira (V, A ou R): ");
    scanf("%c", &bandeira);

    if (kwh <= 100){
        valor = kwh * 0.6;
    } else if (kwh <= 200){
        valor = 100 * 0.6 + (kwh - 100) * 0.75;
    } else {
        valor = 100 * 0.6 + 100 * 0.75 + (kwh - 200) * 0.9;
    }

    switch(bandeira){
        case 'V':
        case 'v': break;
        case 'A':
        case 'a': valor = valor * 1.05; break;
        case 'R':
        case 'r': valor = valor * 1.10; break;
        default: printf("\nBandeira invalida!");
    }

    printf("\nValor da conta: R$ %.2f", valor);
}