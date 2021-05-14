/*
 * fagundez_input.h
 *
 *  Created on: 14 may. 2021
 *      Author: Antony
 */

#ifndef FAGUNDEZ_INPUT_H_
#define FAGUNDEZ_INPUT_H_

/**
 * @brief Funcion para obtener un string, con un texto y un maximo de caracteres
 *
 * @param puntero del string donde va a guardar el valor
 * @param maxLenght maximo largo del string
 * @param texto texto a mostrar
 * @return
 */
int getString(char * [], int maxLenght, char * texto);

/**
 * @brief Funcion para obtener un char
 *
 * @param valor puntero donde guardar
 * @param texto Texto a mostrar
 * @return 1 si ocurrio correctamente o cero si ocurrio algun error
 */
int getChar2(char * valor, char * texto);


#endif /* FAGUNDEZ_INPUT_H_ */
