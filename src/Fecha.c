/*
 * Fecha.c
 *
 *  Created on: 14 may. 2021
 *      Author: Antony
 */
#include "Fecha.h"
#include <stdio.h>
#include <stdlib.h>

int altaFecha(eFecha *unaFecha)
{
	int success = 0;

	eFecha fecha = {-1,-1,-1};


    if(unaFecha != NULL)
    {
       printf("Ingrese Fecha (dd/mm/aaaa): ");
       scanf("%d/%d/%d", &fecha.dia, &fecha.mes, &fecha.anio);

       if(fecha.dia < 0 || fecha.dia > 31)
       {
    	   printf("Fecha ingresada: __/%d/%d\n", fecha.mes, fecha.anio);
    	   printf("Ingrese un dia valido (entre 1 y 31): ");
    	   scanf("%d", &fecha.dia);
       }

       if(fecha.mes < 0 || fecha.mes > 12)
       {
    	   printf("Fecha ingresada: %d/__/%d\n", fecha.dia, fecha.anio);
    	   printf("Ingrese un mes valido (entre 1 y 12)");
    	   scanf("%d", &fecha.mes);
       }

       if(fecha.anio < 0)
       {
    	   printf("Fecha ingresada: %d/%d/____\n", fecha.dia, fecha.mes);
    	   printf("Ingrese un anio valido. (No debe ser negativo)");
    	   scanf("%d", &fecha.anio);
       }


       printf("Fecha ingresada correctamente.\n");


       success= 1;
       *unaFecha = fecha;

       return success;
    }

	return success;
}


void mostrarFecha(eFecha unaFecha)
{
	printf("%02d/%02d/%04d\n", unaFecha.dia, unaFecha.mes, unaFecha.anio);
}

