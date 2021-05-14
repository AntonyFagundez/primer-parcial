/*
 * fagundez_input.c
 *
 *  Created on: 14 may. 2021
 *      Author: Antony
 */
#include "stdio.h"
#include "string.h"
#include <stdlib.h>

int getString(char *valor, int maxLenght, char* texto){
	int success = 0;
	int successInput;


	printf(texto);
	fflush(stdin);
	successInput = scanf("%s", valor);

	while(!successInput || strlen(valor) > maxLenght)
	{
		printf("ERROR: Ingrese un valor valido menor a %d caracteres\n", maxLenght);
		printf(texto);
		fflush(stdin);
		successInput = scanf("%s", valor);
	}

	success= 1;


	return success;
}


int getChar2(char *val, char * texto)
{
	int success = 0;
	int successInput;
    char valorTemp[1]= {"\0"};


	printf(texto);
	fflush(stdin);
	successInput = scanf("%s", valorTemp);

	while(!successInput || strlen(valorTemp) > 1)
	{
		printf("ERROR: Ingrese un valor valido menor a 2 caracteres\n");
		printf(texto);
		fflush(stdin);
		successInput = scanf("%s", valorTemp);
	}

	*val = valorTemp[0];
	success= 1;


	return success;
}
