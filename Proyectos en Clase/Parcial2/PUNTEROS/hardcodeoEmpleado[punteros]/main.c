#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

int legajo;
char nombre[20];
char sexo;
float sueldo;

}eEmpleado;

//CREA UN NUEVO EMPLEADO HARDCODEADO
eEmpleado* new_Empleado();

//MUESTRA EMPLEADO
void mostrarEmpleado(eEmpleado* empleado);

//CREA UN NUEVO EMPLEADO A PARTIR DE LOS PARAMETROS
eEmpleado* new_EmpleadoParam(int leg, char* nombre, char sexo, float sueldo);

int main()
{
    eEmpleado* unEmpleado;
    eEmpleado* otroEmpleado;

    unEmpleado = new_Empleado();
    otroEmpleado = new_EmpleadoParam(2222, "Jose", 'm', 40000);


    mostrarEmpleado(unEmpleado);
    mostrarEmpleado(otroEmpleado);




    return 0;
}

//CREA UN NUEVO EMPLEADO HARDCODEADO
eEmpleado* new_Empleado()
{
    eEmpleado* nuevo;

    nuevo = (eEmpleado*) malloc(sizeof(eEmpleado));

    if(nuevo != NULL)
    {
        nuevo->legajo = 0;
        strcpy(nuevo->nombre, "");
        nuevo->sexo = ' ';
        nuevo->sueldo = 0;
    }

    return nuevo;
}

//CREA UN NUEVO EMPLEADO A PARTIR DE LOS PARAMETROS
eEmpleado* new_EmpleadoParam(int leg, char* nombre, char sexo, float sueldo)
{
    eEmpleado* nuevo;

    nuevo = (eEmpleado*) malloc(sizeof(eEmpleado));

    if(nuevo != NULL)
    {
        nuevo->legajo = leg;
        strcpy(nuevo->nombre, nombre);
        nuevo->sexo = sexo;
        nuevo->sueldo = sueldo;
    }

    return nuevo;
}

//MUESTRA EMPLEADO
void mostrarEmpleado(eEmpleado* empleado)
{
    if(empleado != NULL)
    {
     printf("Leg: %d  Nombre: %s   Sexo: %c  Sueldo: %.2f\n", empleado->legajo, empleado->nombre, empleado->sexo, empleado->sueldo);
    }
}
