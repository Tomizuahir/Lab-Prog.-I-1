#include <stdio.h>
#include <stdlib.h>

int dividirEnteros(int op1,int op2)
{
    int res;
    op1/=op2;

    return op1;
}

int retornarValorEntre(int n_min,int n_max,int* num)
{
    int auxNum;
    int flagOK=-1;

    printf("Ingrese un numero entre %d y %d: ",n_min,n_max);
    scanf("%d",&auxNum);

    if(auxNum>=n_min && auxNum<=n_max)
    {
        *num=auxNum;
        flagOK=0;
    }

    return flagOK;
}
