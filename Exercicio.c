(pg. 249) 2. Crie um programa que preencha uma matriz 2 x 4 com números inteiros, calcule e mostre:
■■ a quantidade de elementos entre 12 e 20 em cada linha;


#include <stdio.h>

int main() {

  int matriz[2][4], qtd12_20 = 0, qtdCadaLinha[2];

   for(int l = 0; l < 2; l++){
     for(int c = 0; c < 4; c++){
      printf("[Linha %d] Digite um número inteiro:", l);
       scanf("%d",&matriz[l][c]);

       if(matriz[l][c] >=12 && matriz[l][c] <= 20){
         qtd12_20++;
       }
     }
     qtdCadaLinha[l] = qtd12_20++;
     qtd12_20 = 0;
     printf("Total de elementos entre 12 e 20: %d", qtd12_20);
   }


	printf("Quantidade de elementos entre 12 e 20 em cada linha: \n");
  for(int i = 0; i < 2; i++){
    printf("Linha %d: %d\n", i, qtdCadaLinha[i]);
  }

    return 0;
}
