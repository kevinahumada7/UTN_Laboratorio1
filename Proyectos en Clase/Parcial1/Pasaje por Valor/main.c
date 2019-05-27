#include <stdio.h>
#include <stdlib.h>

//Pasaje por valor (trabaja con copias de los valores)

void muestra(int x, int y);

int main()
{
    int x, y;

    printf("ingrese valor x: ");
    scanf("%d", &x);
    printf("ingrese valor y: ");
    scanf("%d", &y);

    printf("\nDentro del main:\nx: %d y: %d\n",x,y);

    muestra(x,y);

    return 0;
}

void muestra(int x, int y)
{
    x=y;
    printf("\nDentro de la Funcion:\nx: %d y: %d\n",x,y);
}
