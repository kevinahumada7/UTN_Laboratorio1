#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado // mostrar antes de modificar: void* ll_get(LinkedList* self , int index) ->Retorna un puntero al elemento que se encuentra en el índice especificado.
     5. Baja de empleado // mostrar antes de dar de baja: void ll_remove(LinkedList* self , int index) ->Elimina un elemento en LinkedList, en el índice especificado
     6. Listar empleados // |||for(i=0; i< ll_len(LinkedList* self); i++)||| ->Retorna el tamaño del LinkedList
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int option = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();
    do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;
        }
    }while(option != 10);

    //void ll_deleteLinkedList(LinkedList* self) -> Libera el espacio espacio en memoria del LinkedList

    return 0;
}
