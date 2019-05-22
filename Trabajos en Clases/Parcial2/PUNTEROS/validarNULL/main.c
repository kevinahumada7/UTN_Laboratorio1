#include <stdio.h>
#include <stdlib.h>

//VALIDACION DE NULL
int validarNull(void* puntero);

int main()
{
    int* numero;
    numero= (int*) malloc(sizeof(int));

    if(validarNull(numero)==0)
    {
        printf("Ingresar numero: ");
        scanf("%d",numero);

        printf("\nValor Guardado en la Direccion de memoria: %d",*numero);
        printf("\nDireccion de memoria: %p",numero);

        printf("\n\nfree(numero);");
        free(numero);

        printf("\n\nSe libero el espacio en memoria en: %p",numero);
        printf("\nValor Guardado en la Direccion de memoria: %d\n",*numero);
    }


    return 0;
}

int validarNull(void* puntero)
{
    if(puntero==NULL)
    {
        printf("No se consiguio memoria\n");
        system("pause");
        exit(1);
    }
    return 0;
}
