#include <stdio.h>
#include <stdlib.h>

void mostrarVector1(int vec[], int tam);
void mostrarVector2(int vec[], int tam);
void mostrarVector3(int* vec, int tam);
void mostrarVector4(int* vec, int tam);

int main()
{
    int numeros[]= {3,5,2,4,3};

    printf("Mostrar 1\n");
    mostrarVector1(numeros, 5);

    printf("\nMostrar 2\n");
    mostrarVector2(numeros, 5);

    printf("\nMostrar 3\n");
    mostrarVector3(numeros, 5);

    printf("\nMostrar 4\n");
    mostrarVector4(numeros, 5);

    return 0;
}

void mostrarVector1(int vec[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("El valor en el indice %d es: %d\n",i,vec[i]);//NOMENCLATURA VECTORIAL
    }
}

void mostrarVector2(int vec[], int tam)//NO TIENE COHERENCIA
{
    for(int i=0; i<tam; i++)
    {
        printf("El valor en el indice %d es: %d\n",i,*(vec+i));//NOMENCLATURA DE PUNTERO
    }
}

void mostrarVector3(int* vec, int tam)//NO TIENE COHERENCIA
{
    for(int i=0; i<tam; i++)
    {
        printf("El valor en el indice %d es: %d\n",i,vec[i]);//NOMENCLATURA VECTORIAL
    }
}

void mostrarVector4(int* vec, int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("El valor en el indice %d es: %d\n",i,*(vec+i));//NOMENCLATURA DE PUNTERO
    }
}
