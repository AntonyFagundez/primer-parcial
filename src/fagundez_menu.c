/*
 * fagundez_menu.c
 *
 *  Created on: 14 may. 2021
 *      Author: Antony
 */
#include "fagundez_menu.h"
#include "fagundez_utils.h"
#include "stdio.h"
#include "stdlib.h"


int menu()
{
	int opcion;
	system(CLEAR_COMMAND);
	printf("          *****Administracion Juegos Infantiles\n");

	printf("1. - Listar Alquileres\n");
	printf("2. - Alta Alquiler\n");
	printf("3. - Modificar Alquiler\n");
	printf("4. - Baja ALquiler\n");

	printf("5. - Listar Clientes\n");
	printf("6. - Alta Cliente\n");
	printf("7. - Modificar Ciente\n");
	printf("8. - Baja Cliente\n");
	printf("9.- Salir\n");

	opcion = getInt("Ingrese opcion: ");


	return opcion;

}
