#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[51];
    printf("Ingresar nombre del 'archivo.csv': ");
    scanf("%s",nombre);
    strcat(nombre,".csv");


    FILE* file= fopen(nombre,"r");

    if(file==NULL)
    {
        printf("El archivo no existe. ");

        file= fopen(nombre,"w");

        if(file!=NULL)
        {
            printf("Se creara el siguiente archivo: %s",nombre);
        }else
        {
            printf("No se pudo crear el archivo");
        }
    }else
    {
        printf("Se leyo el archivo %s correctamente",nombre);
    }

    fclose(file);

    return 0;
}
