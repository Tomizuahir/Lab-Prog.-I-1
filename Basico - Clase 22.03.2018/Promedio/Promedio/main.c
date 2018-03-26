#include <stdio.h>
#include <stdlib.h>

#define CANT_NUMS 4

//Pedir 4 numeros positivos o cero, y calcular su promedio.
int main()
{
    int num;
    float nprom=0;
    int i=1;

    for(i=1;i<=CANT_NUMS;i++){
        do{
            system("cls");

            printf("Ingrese un numero mayor a cero (%d): ",i);
            scanf("%d",&num);
        }while(num<0);

        nprom+=num;
    }

    nprom/=CANT_NUMS;

    system("cls");

    printf("Promedio: %.2f",nprom);
    return 0;
}
