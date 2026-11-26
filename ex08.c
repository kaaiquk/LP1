//Leia duas notas de um aluno, repetindo a leitura de cada nota enquanto ela estiver fora do intervalo [0, 10] (exiba Nota inválida! a cada tentativa errada). Calcule a média e informe a situação: Aprovado (média ≥ 7,0), Prova final (4,0 ≤ média < 7,0) ou Reprovado (média < 4,0). Ao final, pergunte: Calcular outro aluno? (s/n) e repita todo o processo enquanto a resposta for s ou S .

#include <stdio.h>

void main(){
  float not1, not2, med;
  char resp = 's';

  while (resp == 's' || resp == 'S'){
    do {
      printf("Digite a primeira nota: ");
      scanf("%f", &not1);
      if (not1 > 10 || not1 < 0) {
        printf("Nota inválida!");
      }
    } while (not1 > 10 || not1 < 0);
    do {
      printf("Digite a segunda nota: ");
      scanf("%f", &not2);
      if (not2 > 10 || not2 < 0) {
        printf("Nota inválida!");
      }
    } while (not2 > 10 || not2 < 0);
    
    med = (not1 + not2) / 2;
    
    if (med >= 7){
      printf("APROVADO");
    }
    else if (med >= 4 && med < 7){
      printf("PROVA FINAL");
    }
    else {
      printf("REPROVADO");
    }

    printf("\nCalcular outro aluno? (s/n) ");
    scanf("%c", &resp);
  }
}