//Leia as idades de um grupo de pessoas; a leitura termina quando for digitado -1 (o −1 não faz parte dos dados). Idades fora de [0, 120] devem ser ignoradas com aviso. Ao final, exiba: quantidade de idades válidas, média, maior e menor idade e o percentual de pessoas com 18 anos ou mais. Se nenhuma idade válida for informada, exiba Nenhum dado informado (evite divisão por zero!).

#include <stdio.h>

void main(){
    int idade, soma, idade18m, cont = 0, maior, menor;
    float med, percentual;

    while (idade != -1){
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade < 0 || idade > 120){
        printf("Idade ignorada!\n");
        } 
        else if (0 <= idade <= 120){
        if (cont == 0){
            maior = idade;
            menor = idade;
        }
        else if (cont > 0){
            if (idade > maior){
            maior = idade;
            }
            else if (idade < menor){
            menor = idade;
            }
        }
        if (idade>=18){
            idade18m += 1;
        }
        soma += idade;
        cont += 1;
        }
    }
    
    if (cont==0){
        printf("Nenhum dado válido informado");
        return 0;
    }

    med = (float)soma / (float)cont;
    percentual = ((float)idade18m / (float)cont) * 100;
    
    printf("\nQuantidade de idades válidas: %d", cont);
    printf("\nMédia: %.1f", med);
    printf("\nMaior idade: %d", maior);
    printf("\nMenor idade: %d", menor);
    printf("\nPercentual de pessoas com 18 anos ou mais: %.1f%%", percentual);
}