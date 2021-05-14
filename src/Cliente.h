/*
 * Cliente.h
 *
 *  Created on: 14 may. 2021
 *      Author: Antony
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_

typedef struct {
	int codigo;
	char nombre[51];
	char apellido[51];
	char sexo;
	char telefono[21];
}eCliente;

/**
 * @brief Funcion para mostrar cliente
 *
 * @param cliente
 */
void mostrarCliente(eCliente cliente);

/**
 * @brief Funcion para mostrar los clientes actuales
 *
 * @param clientes lista de clientes
 * @param TAM tamaño de array de clientes
 */
void mostrarClientes(eCliente clientes[], int TAM);

/**
 * @brief alta de cliente
 *
 * @param unCliente
 * @return 1 si ingreso correctamente, o cero si ocurrio algun error.
 */
int altaCliente(eCliente *unCliente);

/**
 * @brief Funcion para buscar cliente
 *
 * @param codigo codigo del cliente a buscar
 * @return -1 si ocurrio un error o el codigo a ingresar
 */
int buscarCliente(int codigo);
/**
 * @brief alta de cliente
 *
 * @param unCliente
 * @return 1 si ingreso correctamente, o cero si ocurrio algun error.
 */
int modificarCliente(int codigo);



#endif /* CLIENTE_H_ */
