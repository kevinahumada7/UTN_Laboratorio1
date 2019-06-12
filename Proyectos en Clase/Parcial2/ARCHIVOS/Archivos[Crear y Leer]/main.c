#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* file= fopen("primerArchivo.bin","rb");

    if(file==NULL)
    {
        file= fopen("primerArchivo.bin","wb");

        if(file!=NULL)
        {
            printf("Se creara un archivo\n");
        }else
        {
            printf("No se puede crear el archivo\n");
        }
    }else
    {
        printf("El archivo ha sido leido con exito\n");
    }

    fclose(file);

    return 0;
}
