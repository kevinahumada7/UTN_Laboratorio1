#include <stdio.h>

int factorial(int operando);

int main()
{
    int valor,result;

    printf("Ingrese numero: ");
    scanf("%d",&valor);

    result=factorial(valor);

    if(result!=-1)
    {
        printf("\nEl factorial de %d es %d\n",valor,result);
    }else
    {
        printf("\nNo existe operando menor a 0\n");
    }



    return 0;
}

int factorial(int operando)
{
    int resultado=-1;
    int i;
    int factoreo=1;

    if(operando>=0)
    {
        for (i=1; i<=operando; i++)
        {
            factoreo=factoreo*i;
        }
        resultado=factoreo;
    }
    return resultado;
}
