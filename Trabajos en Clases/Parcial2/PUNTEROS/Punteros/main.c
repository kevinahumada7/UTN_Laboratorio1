#include <stdio.h>
#include <stdlib.h>

void mostrarDirecciones(int* puntero);
int modificarDato(int* x);

int main()
{
    int x= 10;
    int* punteroX= &x;//Declaracion de Puntero
    int** pPuntero= &punteroX;//Un puntero que guarda direcciones de memoria

    printf("X vale: %d\n", *punteroX);
    printf("\nDireccion de memoria de X: 0x%x | %p",&x,&x);
    mostrarDirecciones(punteroX);
    modificarDato(punteroX);
    //printf("\nX ahora vale: %d\n", x);
    printf("\nX ahora vale: %d\n", **pPuntero);

    return 0;
}

void mostrarDirecciones(int* puntero)
{
    printf("\nDireccion de memoria de P: 0x%x | %p\n",puntero,puntero);
}

int modificarDato(int* x)
{
    printf("\nModificar X: ");
    scanf("%d", x);

    return x;
}
