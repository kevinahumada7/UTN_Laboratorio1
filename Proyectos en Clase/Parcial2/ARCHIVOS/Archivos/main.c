#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nombre[32];
    char apellido[32];
    int edad;
}ePersona;

int main()
{
    FILE* file= fopen("lista.txt","r");
    ePersona* lista= (ePersona*)malloc(sizeof(ePersona)*3);
    int cant;

    if(lista==NULL)
    {
        printf("No se consiguio memoria para la lista");
        exit(EXIT_FAILURE);
    }

    if(file==NULL)
    {
        file= fopen("lista.txt","w");

        if(file!=NULL)
        {
            printf("Archivo creado\n\n");
        }else
        {
            printf("No se pudo crear el archivo\n\n");
        }

        for(int i=0; i<3; i++)
        {
            system("cls");
            printf("Ingresar id: ");
            scanf("%d",&lista->id);

            printf("Ingresar Nombre: ");
            fflush(stdin);
            gets(lista->nombre);

            printf("Ingresar Apellido: ");
            fflush(stdin);
            gets(lista->apellido);

            printf("Ingresar edad: ");
            scanf("%d",&lista->edad);

            fwrite(lista, sizeof(ePersona),1, file);
        }


    }else
    {
        printf("feof: %d\n\n",feof(file));
        while(!feof(file))
        {
            cant= fread(lista,sizeof(ePersona),1, file);
            printf("\n!feof: %d\n",!feof(file));

            if(cant!=1)
            {
                if(feof(file))
                {
                    break;
                }else
                {
                    printf("No leyo el ultimo registro\n");
                }
            }
            printf("ID: %04d   Nombre: %-15s   Apellido: %-15s   Edad: %d\n",lista->id,lista->nombre,lista->apellido,lista->edad);
        }

    }

    fclose(file);

    return 0;
}
