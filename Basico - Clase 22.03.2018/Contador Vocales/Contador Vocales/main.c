#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LONG_CARAC 10

int main()
{
    char caracteres[LONG_CARAC];
    int i,cont_A=0,cont_E=0,cont_I=0,cont_O=0,cont_U=0;

    do{
        printf("Ingrese 10 caracteres: ");
        gets(caracteres);
    }while(strlen(caracteres)!=10);

    for(i=0;i<=LONG_CARAC-1;i++){
        if(caracteres[i]=='A')
            cont_A++;
        else if(caracteres[i]=='E')
            cont_E++;
        else if(caracteres[i]=='I')
            cont_I++;
        else if(caracteres[i]=='O')
            cont_O++;
        else if(caracteres[i]=='U')
            cont_U++;
    }

    printf("Cantidad de vocales ingresadas:\n");
    printf(" Vocal A: %d\n",cont_A);
    printf(" Vocal E %d\n",cont_E);
    printf(" Vocal I: %d\n",cont_I);
    printf(" Vocal O: %d\n",cont_O);
    printf(" Vocal U: %d\n",cont_U);

    system("pause");

    return 0;
}

















