#include <stdio.h>

int main() {
 	int elementos[5];

  printf("Entre com os valores: ");

  for(int i=0; i < 5;i++){
    scanf("%d", &elementos[i]);
  }

  for(int i = 0; i < 5; i++){
    if(elementos[i] == 30){
      printf("A posição do numero 30 é: %d\n", i + 1 );
    }
  }


  return 0;
}
