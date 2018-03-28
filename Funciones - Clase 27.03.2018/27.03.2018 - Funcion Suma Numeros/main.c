#include <stdio.h>
#include <stdlib.h>

int sumarNumeros(int,int);

int main(){
    int numero1, numero2;

    printf("Ingrese primer numero: ");
    scanf("%d",&numero1);

    printf("Ingrese segundo numero: ");
    scanf("%d",&numero2);

    numero1=sumarNumeros(numero1,numero2);

    printf("Resultado: %d\n",numero1);

    return 0;
}

int sumarNumeros(int num1,int num2){
    num1+=num2;
    return num1;
}
