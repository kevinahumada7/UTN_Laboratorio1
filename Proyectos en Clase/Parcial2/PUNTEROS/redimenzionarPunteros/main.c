#include <stdio.h>
#include <stdlib.h>

int validarNull(void* puntero);
void ordenarNumeros(int* numeros);

int main()
{
    int* numeros;
    numeros= (int*)malloc(sizeof(int)*5);
    if(validarNull(numeros)==0)
    {
        for(int i=0; i<5; i++)
        {
            printf("Ingresar numero[%d]: ",i+1);
            scanf("%d",(numeros+i));
        }

        printf("\n");

        for(int i=0; i<5; i++)
        {
            printf("%d ",*(numeros+i));
        }
        printf("\n");
    }

    //AGRANDAR VECTOR
    printf("\nAGRANDO EL VECTOR\n\n");
    int* auxNumeros;
    auxNumeros= (int*)realloc(numeros,sizeof(int)*10);

    if(auxNumeros==NULL)
    {
        printf("\n\nNo se logro agrandar el Array\n\n");

    }else
    {
        numeros= auxNumeros;

        for(int i=5; i<10; i++)
        {
            printf("Ingresar numero[%d]: ",i+1);
            scanf("%d",(numeros+i));
        }
        printf("\n");
        for(int i=0; i<10; i++)
        {
            printf("%d ",*(numeros+i));
        }
        printf("\n");
    }

    //ORDENO LOS NUMEROS DEL VECTOR
    printf("\nORDENO LOS NUMEROS DEL VECTOR\n");
    ordenarNumeros(numeros);
    for(int i=0; i<10; i++)
    {
        printf("%d ",*(numeros+i));
    }
    printf("\n");

    //Achicar Array
    printf("\nACHICO EL VECTOR\n\n");
    (int*)realloc(numeros,sizeof(int)*5);

    if(auxNumeros==NULL)
    {
        printf("\n\nNo se logro agrandar el Array\n\n");

    }else
    {
        for(int i=0; i<10; i++)
        {
            printf("%d ",*(numeros+i));
        }
        printf("\n\n");
    }

    free(numeros);

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

void ordenarNumeros(int* numeros)
{
    int aux;

    for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(*(numeros+i) > *(numeros+j))
            {
                aux= *(numeros+i);
                *(numeros+i)=*(numeros+j);
                *(numeros+j)=aux;
            }
        }
    }
}
