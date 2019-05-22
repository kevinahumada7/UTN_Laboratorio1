#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5]={7,10,22,25,1};
    int numero;
    int bandera=0;

    printf("Ingresar numero a buscar: ");
    scanf("%d", &numero);

    for(int i=0; i<5; i++)
    {
        if(numero==vec[i])
        {
            printf("El numero %d se encuentra en este array",numero);
            bandera=1;
            break;
        }
    }

    if(bandera==0)
    {
        printf("No se encontro el numero %d en este array",numero);
    }


    return 0;
}
