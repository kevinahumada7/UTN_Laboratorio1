#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5];

    for(int i=0; i<5; i++)
    {
        printf("Ingresar valor en el indice %d: ", i);
        scanf("%d", &vec[i]);
    }
    for(int i=0; i<5; i++)
    {
        printf("%d ", vec[i]);
    }


    return 0;
}
