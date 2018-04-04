#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"


int main()
{
    int resultado;
    int sePudo;

    resultado=dividirEnteros(100,4);
    printf("Resultado: %d\n",resultado);

    sePudo=retornarValorEntre(-40,40,&resultado);

    if(sePudo==0)
        printf("Se pudo.\n");
    else
        printf("No se pudo.\n");

    return 0;
}
