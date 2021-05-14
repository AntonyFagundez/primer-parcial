/*
 * Categoria.h
 *
 *  Created on: 14 may. 2021
 *      Author: Antony
 */

#ifndef CATEGORIA_H_
#define CATEGORIA_H_

typedef struct {
	int id;
	char descripcion[51];
} eCategoria;


eCategoria CATEGORIAS[4] = { {1,"mesa"}, {2, "azar"}, {3, "estrategia"}, {4, "salon"}, {5, "magia"} };
#endif /* CATEGORIA_H_ */
