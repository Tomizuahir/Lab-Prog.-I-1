#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int NSECRETO=72;

    int i ntentos=0, num_usuario, numero;

    do{
        printf("Ingrese un numero: ");

//-----------------------------------------------------
        //Comprueba si se ingreso un numero o una letra. Si devuelve 1 (o cantidad de mascaras que se pudieron leer) es numero, sino letra.
        fflush(stdin);
        numero=scanf("%d",&num_usuario);
        printf("NUMERO: %d\n",numero);
        system("pause");
//-----------------------------------------------------
        intentos++;

        if(num_usuario<NSECRETO)
            printf("El numero que ingreso es menor al que debe adivinar.\n");
        else if(num_usuario>NSECRETO)
            printf("El numero que ingreso es mayor al que debe adivinar.\n");
    }while(num_usuario!=NSECRETO);

    if(intentos<5)
        printf("Felicitaciones!\n");
    else if(intentos>=5 && intentos<=10)
        printf("No esta mal.\n");
    else
        printf("Debe practicar mas.\n");

    printf("CANTIDAD DE INTENTOS: %d\n",intentos);

    system("pause");

    return 0;
}
