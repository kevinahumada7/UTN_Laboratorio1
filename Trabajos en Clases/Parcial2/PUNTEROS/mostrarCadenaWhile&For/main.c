#include <stdio.h>
#include <stdlib.h>

void mostrarCadenaWhile(char* cadena);
void mostrarCadenaFor(char* cadena);

int main()
{
    char mensaje[]= "Hola Mundo";
    mostrarCadenaWhile(mensaje);
    printf("\n");
    mostrarCadenaFor(mensaje);
    return 0;
}

void mostrarCadenaWhile(char* cadena)
{
    printf("Cadena mostrada por While: ");
    while(*cadena!='\0')
    {
        printf("%c", *cadena);
        cadena++;
    }
    printf("\n");

}
void mostrarCadenaFor(char* cadena)
{
    printf("Cadena mostrada por For: ");
    for(int i=0; *(cadena+i)!='\0'; i++)
    {
        printf("%c", *(cadena+i));
    }
    printf("\n");
}
