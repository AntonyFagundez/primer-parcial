/*
 * fagundez_menu.h
 *
 *  Created on: 14 may. 2021
 *      Author: Antony
 */

#ifndef FAGUNDEZ_MENU_H_
#define FAGUNDEZ_MENU_H_

#if defined(_WIN32) || defined(_WIN64) || defined(__WINDOWS__)
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif

/**
 * @brief Funcion para mostrar menu y obtener opcion
 *
 * @return la opcion seleccionada
 */
int menu(void);

#endif /* FAGUNDEZ_MENU_H_ */
