#include <stdio.h>

int main(){
    long long int numero = 9223372036854775807;

    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793238463;
    printf("\n *** Número em long long int ***: \n%lld", numero);

    printf("\n *** Número em double ***: \n%.15f", numeroPreciso);

    printf("\n *** Número em long double ***: \n%.21lf", numeroMuitoPreciso);

}