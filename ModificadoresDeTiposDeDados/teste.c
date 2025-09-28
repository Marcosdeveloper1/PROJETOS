#include <stdio.h>

int main(){
    long long int numeroLongLongInt = 699289999999;
    int numeroInt = 699289999999;
    unsigned int numeroUnsignedInt= 699289999999;

    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793238463;


    printf("\n *** Número em long long int ***: \n%lld", numeroLongLongInt);

    printf("\n *** Número em int ***: \n%.d", numeroInt);

    printf("\n *** Número em Unsigned Int ***: \n%u", numeroUnsignedInt);

     printf("\n *** Número em double***: \n%.2lf", numeroPreciso);

     printf("\n *** Número em long double***: \n%.2LF", numeroMuitoPreciso);

}


//mostrando que os tipos das variáveis suportam um valor x dentro delas