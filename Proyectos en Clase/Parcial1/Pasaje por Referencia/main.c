#include <stdio.h>
#include <stdlib.h>

//Pasaje por referencia

void muestra(int *x, int y);

int main()
{
    int x, y;

    printf("ingrese: ");
    scanf("%d", &x);//direccion de memoria: 0x100 // dato: 3
    printf("ingrese: ");
    scanf("%d", &y);//direccion de memoria: 0x104 // dato: 5

    muestra(&x/*direccion de memoria*/,y/*dato*/);

    printf("x: %d y:%d\n",x,y);

    return 0;
}

void muestra(int *x/*0x100*/, int y/*5*/)
{
    *x=y;
    printf("x: %d y:%d\n",*x,y);
}

