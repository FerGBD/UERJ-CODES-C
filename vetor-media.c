/*
8. Faça um programa que preencha um vetor com a media
final de 7 alunos. Calcule e mostre:
■■ a nota do aluno com maior media (desconsiderar empates);
■■ a nota do aluno com menor media (desconsiderar empates);
■■ para cada aluno não aprovado, isto e, com média menor que 7, mostrar quanto esse aluno precisa tirar
na prova de exame final para ser aprovado. Considerar que a media para aprovação no exame e 5.
*/
#include <stdio.h>

int main() {
  float mediaFinal[7], maiorMedia = 0 , menorMedia = 10;

	for(int i = 0 ; i < 7 ; i++){
    printf("insira a nota do %d° aluno: ", i);
    scanf("%f", &mediaFinal[i]);
    if(mediaFinal[i] < 0 || mediaFinal[i] > 10){
        printf("Media invalida, digite novamente\n");
      i--;
    } else {
      if(maiorMedia < mediaFinal[i]){
        maiorMedia = mediaFinal[i];
      }
      if(menorMedia > mediaFinal[i]){
        menorMedia = mediaFinal[i];
      }
    }

  }

  for(int i = 0; i < 7 ; i++){
    if(mediaFinal[i] < 7){
      printf("O aluno %d precisa de minimo: ", i);
      printf("%.1f no exame final.\n", 10 - mediaFinal[i]);
    }

  }

  printf("Nota do aluno com a maior media: %.1f\n", maiorMedia);
  printf("Nota do aluno com a menor media: %.1f\n", menorMedia);


  return 0;
}
