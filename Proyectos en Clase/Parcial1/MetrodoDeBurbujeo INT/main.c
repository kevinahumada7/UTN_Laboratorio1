#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5]={4,2,5,1,3};
    int aux;

    for(int i=0; i<5-1; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(vec[i]>vec[j])
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }

    for(int i=0; i<5; i++)
    {
        printf("%d ",vec[i]);
    }

    return 0;
}
