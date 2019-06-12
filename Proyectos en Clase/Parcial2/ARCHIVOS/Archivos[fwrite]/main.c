#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* fileTxT= fopen("texto.txt","w");
    FILE* fileBin= fopen("binario.bin","wb");
    char texto[51];

    if(fileTxT==NULL || fileBin==NULL)
    {
        printf("No se puede cargar el archivo porque no existe.");
    }

    printf("Ingresar texto: ");
    gets(texto);

    fwrite(texto, sizeof(char),strlen(texto),fileTxT);
    fwrite(texto, sizeof(char),strlen(texto),fileBin);

    fclose(fileTxT);
    fclose(fileBin);

    return 0;
}
