/*
 * Fecha.h
 *
 *  Created on: 14 may. 2021
 *      Author: Antony
 */

#ifndef FECHA_H_
#define FECHA_H_

typedef struct {
	int dia;
	int mes;
	int anio;
} eFecha;

/**
 * @brief Funcion para insertar una fecha en el espacio en memoria
 *
 * @param unaFecha espacio en memoria de estructura tipo eFecha
 * @return 1 si inserto correctamente, 0 si no.
 */
int altaFecha(eFecha *unaFecha);

/**
 * @brief Funcion para mostrar una fecha
 *
 * @param unaFecha de tipo estructura eFecha
 */
void mostrarFecha(eFecha unaFecha);

#endif /* FECHA_H_ */
