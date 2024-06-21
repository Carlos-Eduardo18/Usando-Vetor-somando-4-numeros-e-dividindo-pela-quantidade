#include <stdio.h>

int main() {
  float vet[4], soma;
  int i;

  for (i = 0; i < 4; i++) {
    printf("Digite um número");
    scanf("%f", &vet[i]);
    soma=((vet[0]+vet[2]+vet[1]+vet[3])/4);
  }
  printf("%.2f", soma);
  
}