#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[41];

    printf("Ingrese nombre: ");
    scanf("%s", nombre);
    fflush(stdin);

    printf("Ingrese apellido: ");
    scanf("%s", apellido);
    fflush(stdin);

    strcpy(nombreCompleto, apellido);
    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto, nombre);

    strlwr(nombreCompleto);
    nombreCompleto[0]= toupper(nombreCompleto[0]);

    for(int i=0; i<strlen(nombreCompleto); i++)
    {
        if(nombreCompleto[i]==' ')
        {
            nombreCompleto[i+1]= toupper(nombreCompleto[i+1]);
        }
    }

    puts(nombreCompleto);

    return 0;
}
