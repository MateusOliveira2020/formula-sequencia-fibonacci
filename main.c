#include <stdio.h>
/*Elabore um programa em C utilizando a estrutura de repetição FOR para demonstrar os N números da sequencia a seguir. Deverá entrar com o valor de N. SEQUENCIA:1 1 2 3 5 8 13 21 34 55
*/
int main(void) {
  int N=10;
  int primeirotermo=0;
  int segundotermo=1;
  int auxiliar;
  for (int i =0; i<N;i++){
    printf("%d",segundotermo);
    auxiliar=primeirotermo+segundotermo;
    primeirotermo=segundotermo;
    segundotermo=auxiliar;
    
  }
  return 0;
}