#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "./input.h"
/////////////////////////////////////////////////////////////////////////////////////////////////
int getInt(int* input,char message[],char eMessage[], int lowLimit, int hiLimit)
{
    int valor;

    int validar = -1;

    printf("%s ", message);
    scanf("%d", &valor);

    while(valor < lowLimit || valor > hiLimit)
    {

        printf("///%s///\n", eMessage);
        printf("\n%s ", message);
        fflush(stdin);
        scanf("%d", &valor);
    }

    *input = valor;
    validar = 0;

    return validar;
}
/////////////////////////////////////////////////////////////////////////////////////////////////
int getFloat(float* input,char message[],char eMessage[], float lowLimit, float hiLimit)
{
    float valor;
    int validar = -1;

    printf("%s ", message);
    scanf("%f", &valor);

    while(valor < lowLimit || valor > hiLimit)
    {

        printf("///%s///\n", eMessage);
        printf("\n%s ", message);
        fflush(stdin);
        scanf("%f", &valor);
    }

    *input = valor;
    validar = 0;

    return validar;
}
/////////////////////////////////////////////////////////////////////////////////////////////////
int getChar(char* input,char message[],char eMessage[], char lowLimit, char hiLimit)
{
    char valor;
    int validar = -1;

    printf("%s ", message);
    fflush(stdin);
    scanf("%c", &valor);

    while(valor < lowLimit || valor > hiLimit)
    {
        printf("///%s///\n", eMessage);
        printf("\n%s ", message);
        fflush(stdin);
        scanf("%c", &valor);
    }

    *input = valor;
    validar = 0;

    return validar;
}
/////////////////////////////////////////////////////////////////////////////////////////////////
int getOptionChar(char* input,char message[],char eMessage[], char caracterUno, char caracterDos)
{
    char caracter;
    int validar = -1;

    printf("%s ", message);
    fflush(stdin);
    scanf("%c", &caracter);

    while( toupper(caracter) != toupper(caracterUno) && toupper(caracter) != toupper(caracterDos))
    {
        printf("///%s///\n", eMessage);
        printf("\n%s ", message);
        fflush(stdin);
        scanf("%c", &caracter);
    }

    *input = toupper(caracter);
    validar = 0;

    return validar;
}
/////////////////////////////////////////////////////////////////////////////////////////////////
int getString(char* input,char message[],char eMessage[], int lowLimit, int hiLimit)
{
    char valor[50];
    int validar = -1;

    printf("%s ", message);
    fflush(stdin);
    scanf("%s", valor);

    while(strlen(valor) < lowLimit || strlen(valor) > hiLimit)
    {
        printf("///%s///\n", eMessage);
        printf("\n%s ", message);
        fflush(stdin);
        scanf("%s", valor);
    }

    strcpy(input,valor);

    validar = 0;

    return validar;
}
