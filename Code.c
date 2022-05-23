#include <stdio.h>
// Um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que 10.
int main(void) {
  int numero;

printf("\t se o numero é maior ou menor que 10: ");
scanf("%d",&numero);
if(numero>10)
printf("numero maior que 10");
 else
  printf("numero menor que 10");
  return 0;
}