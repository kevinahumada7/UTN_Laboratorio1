#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int vec[5];
    int posicion;
    char continuar;

    for(int i=0; i<5; i++)
    {
        vec[i]=0;
    }

        do
        {
            printf("Ingresar posicion del indice: ");
            scanf("%d", &posicion);
            fflush(stdin);

            printf("Ingresar el valor a cargar en el indice del vector: ");
            scanf("%d",&vec[posicion]);
            fflush(stdin);

            printf("Desea ingresar otro dato? [S/N]: ");
            scanf("%c",&continuar);
            fflush(stdin);

        }while(continuar!='n');


    for(int i=0; i<5; i++)
    {
        printf("%d ", vec[i]);
    }

    return 0;
}

