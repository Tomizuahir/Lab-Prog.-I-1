#include <stdio.h>
#include <stdlib.h>

int sumar(int,int);

int main()
{
    int nOp1,nOp2;

    printf("Ingrese numero operando 1: ");
    scanf("%d",&nOp1);

    printf("Ingrese numero operando 2: ");
    scanf("%d",&nOp2);

    nOp1=sumar(nOp1,nOp2);

    system("cls");
    printf("Resultado: %d\n",nOp1);

    return 0;
}

int sumar(int op1,int op2)
{
    op1+=op2;

    return op1;
}
