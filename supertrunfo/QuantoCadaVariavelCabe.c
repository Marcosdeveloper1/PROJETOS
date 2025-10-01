#include <stdio.h>

int main(){
  int numero1= 699280000000;
  long int numero2= 699280000000;
  long long int numero3 = 699280000000;
  unsigned int numero4 = 699280000000;
  unsigned long int numero5 =699280000000;
  float numero6= 699280000000;
  long double numero7 = 699280000000;
  double numero8= 699280000000;

  printf("Variável int: %d\n", numero1);

  printf("Variável long int: %ld\n", numero2);

  printf("Variável long long int: %lld\n", numero3);

  printf("Variável unsigned int: %u\n", numero4);

  printf("Variável unsigned long int: %lu\n", numero5);

  printf("Variável float: %f\n", numero6);

  printf("Variável long double: %Lf\n", numero7);

  printf("Variável float %f\n", numero8);

}