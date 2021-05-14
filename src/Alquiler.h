/*
 * Alquiler.h
 *
 *  Created on: 14 may. 2021
 *      Author: Antony
 */

#ifndef ALQUILER_H_
#define ALQUILER_H_

typedef struct {
	int codigo;
	int codigoJuego;
	int codigoCLiente;
	eFecha fecha;
}eAlquiler;


/**
 * @brief Funcion para mostrar clientes
 *
 * @param lista lista de clientes
 * @param tam tamaño de la lista de clientes
 */
void listarAlquileres(eAlquiler lista[], int tam);

/**
 * @brief Funcion para buscar alquiler en funcion del codigo
 *
 * @param codigo codigo a buscar
 * @return -1 si no lo encontro, o el codigo encontrado
 */
int buscarAlquiler(int codigo);

/**
 * @brief Funcion para mostrar un alquiler
 *
 * @param alquiler
 */
void mostrarAlquiler(eAlquiler alquiler);

/**
 * @brief Funcion para modificar un alquiler
 *
 * @param unAlquiler
 * @return 0 si ocurrio un error o 1 si ocurrio correctamente
 */
int modificarAlquiler(eAlquiler * unAlquiler);

/**
 * @brief Funcion para eliminar un alquiler en funcion de su codigo
 *
 * @param codigo codigo a buscar
 * @return 0 si ocurrio un error o 1 si ocurrio correctamente
 */
int eliminarAlquiler(int codigo);

/**
 * @brief Funcion para buscar indice libre en el array
 *
 * @return -1 si no hay espacio libre o un numero  o el indice
 */
int buscarEspacioAlquiler(void);


/**
 * @brief Funcion para ingresar un alquiler
 *
 * @param alquiler
 * @return -1 si ocurrio un error o 1 en caso correcto de ingresarlo completamente
 */
int altaAlquiler(eAlquiler * alquiler);

#endif /* ALQUILER_H_ */
