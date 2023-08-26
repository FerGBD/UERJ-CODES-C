#include <stdio.h>
int sum(int *num1, int *num2){
    int soma;
    soma = (*num1 + *num2);
    return soma;
}
int main() {
   int nbr1, nbr2, SOM;
   scanf("%d %d", &nbr1, &nbr2);

   SOM = sum(&nbr1, &nbr2);

   printf("A soma dos valores e -> %d \n", SOM);

    return 0;
}
