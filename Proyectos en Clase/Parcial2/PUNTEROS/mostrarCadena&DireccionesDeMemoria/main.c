#include <stdio.h>
#include <stdlib.h>

void mostrarCadena(char* punteroCadena);

int main()
{
    char palabra[]= {"Hola Mundo"};

    mostrarCadena(palabra);


    return 0;
}

void mostrarCadena(char* punteroCadena)
{
    int i=0;
    while(*(punteroCadena+i) != '\0')
    {
        printf("%c",*(punteroCadena+i));
        i++;
    }
    //MUESTRO LAS DIRECCIONES DE MEMORIA
    i=0;
    printf("\n\n");
    while(*(punteroCadena+i) != '\0')
    {
        printf("%p=",(punteroCadena+i));
        printf("'%c'\n",*(punteroCadena+i));
        i++;
    }
}
