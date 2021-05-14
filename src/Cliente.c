/*
 * Cliente.c
 *
 *  Created on: 14 may. 2021
 *      Author: Antony
 */
#include "Cliente.h"
#include "stdio.h"
#include "fagundez_menu.h"
#include "string.h"
#include "fagundez_input.h"

#define MAX_CHAR_NOM_APE 51
#define MAX_CHARS_TELEF 21


void mostrarCliente(eCliente cliente){
	printf("%4d     %51s     %51s     %c   %21s\n", cliente.codigo, cliente.nombre, cliente.apellido, cliente.sexo, cliente.telefono);
}

//typedef struct {
//	int codigo;
//	char nombre[51];
//	char apellido[51];
//	char sexo;
//	char telefono[21];

/**
 * @brief Funcion para mostrar los clientes actuales
 *
 * @param clientes lista de clientes
 * @param TAM tamaño de array de clientes
 */
void mostrarClientes(eCliente clientes[], int TAM){

	printf("            ****Clientes");
	printf("Codigo  Nombre  Apellido  Sexo  Telefono\n");
	for(int i =0; i < TAM; i++)
	{
		mostrarCliente(clientes[i]);
	}
}

/**
 * @brief alta de cliente
 *
 * @param unCliente
 * @return 1 si ingreso correctamente, o cero si ocurrio algun error.
 */
int altaCliente(eCliente *unCliente){

	int success = 0;

	eCliente clienteAValidar;
	int nombreInputSuccess = 0;
	system(CLEAR_COMMAND);

	printf("      Alta Cliente\n");

    getString(&clienteAValidar.nombre, MAX_CHAR_NOM_APE, "Ingrese Nombre: ");
	getString(&clienteAValidar.apellido, MAX_CHAR_NOM_APE, "Ingrese Apellido: ");
	getChar(&clienteAValidar.sexo, "Ingrese Sexo: ");
	getString(&clienteAValidar.telefono, MAX_CHARS_TELEF, "Ingrese Telefono: ");

	success = 1;

	return success;
}

/**
 * @brief Funcion para buscar cliente
 *
 * @param codigo codigo del cliente a buscar
 * @return -1 si ocurrio un error o el codigo a ingresar
 */
int buscarCliente(int codigo){

}
/**
 * @brief alta de cliente
 *
 * @param unCliente
 * @return 1 si ingreso correctamente, o cero si ocurrio algun error.
 */
int modificarCliente(int codigo){

}
