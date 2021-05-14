/*
 ============================================================================
 Name        : fagundez-antony-1erParcial.c
 Author      : Antony Fagundez
 Version     :
 Copyright   : Primer Parcial 1G
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "fagundez_menu.h"
#include "fagundez_colors.h"
#include "fagundez_utils.h"

#define LISTAR_ALQ 1
#define ALTA_ALQ 2
#define MODIF_ALQ 3
#define BAJA_ALQ 4

#define LISTAR_CLI 5
#define ALTA_CLI 6
#define MODIF_CLI 7
#define BAJA_CLI 8
#define SALIR_MENU 9

int main(void) {
	char resp = 's';
    char conf;
	do
	{
		switch (menu())
		{
		case LISTAR_ALQ:
           printf("listar");
           system("pause");
			break;
		case ALTA_ALQ:
           printf("alta");
           system("pause");
			break;
		case MODIF_ALQ:
            printf("mod");
           system("pause");
			break;
		case BAJA_ALQ:
            printf("baja");
           system("pause");
			break;
		case LISTAR_CLI:
           printf("listar");
           system("pause");
			break;
		case ALTA_CLI:
           printf("alta");
           system("pause");
			break;
		case MODIF_CLI:
            printf("mod");
           system("pause");
			break;
		case BAJA_CLI:
            printf("baja");
           system("pause");
			break;

		case SALIR_MENU:
			conf = getChar(BHYEL"Desea Salir?"RESET"(s/"BHWHT"n"RESET")\n");
			resp = conf == 's' ? 'n' : 's';
			break;

		}
	} while (resp == 's');


	return EXIT_SUCCESS;
}
