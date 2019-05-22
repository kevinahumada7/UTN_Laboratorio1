#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

typedef struct
{
    int legajo;
    char nombre[20];

}eDatos;

int main()
{
    eDatos empleado[TAM]=
    {
        {1245,"Lucho"},
        {1752,"Alvaro"},
        {1234,"Kevin"},
        {1525,"Tomas"},
        {1432,"Gabi"}
    };

    //POR NOMBRE DESCENDENTE
    for(int i=0; i<TAM-1; i++)
    {
        for(int j=i+1; j<TAM; j++)
        {
            if(strcmp(empleado[i].nombre, empleado[j].nombre)>0)
            {
               eDatos aux;
               aux= empleado[i];
               empleado[i]=empleado[j];
               empleado[j]=aux;
            }
        }
    }


    printf("Legajo    Nombre\n");
    for(int i=0; i<TAM; i++)
    {
        printf("%5d     %s\n", empleado[i].legajo, empleado[i].nombre);
    }

}

    /*//PEDIR DATOS
    for(int i=0; i<TAM; i++)
    {
        printf("Ingresar Legajo: ");
        scanf("%d", &empleado[i].legajo);
        fflush(stdin);

        printf("Ingrear nombre: ");
        gets(empleado[i].nombre);

        printf("\n\n");
    }*/

    /*//ORDENAR POR LEGAJO ASCENDENTE
    for(int i=0; i<TAM-1; i++)
    {
        for(int j=i+1; j<TAM; j++)
        {
            if(empleado[i].legajo>empleado[j].legajo)
            {
                eDatos aux;
                aux= empleado[i];
                empleado[i]= empleado[j];
                empleado[j]=aux;
            }
        }
    }*/
