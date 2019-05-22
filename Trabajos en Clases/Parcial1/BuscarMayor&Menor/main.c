#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5]={8,-1,8,1,19};
    int mayor= vec[0];
    int menor= vec[0];


    for(int i=0; i<5; i++)
    {
        if(vec[i]>mayor)
        {
            mayor=vec[i];
        }
        if(vec[i]<menor)
        {
            menor=vec[i];
        }

    }

    printf("El mayor es %d y El menor es %d", mayor, menor);


    return 0;
}
