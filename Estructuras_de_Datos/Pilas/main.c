#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Base_Pilas.h"

void main ()
{
	Pila pilita;
	int i;	
	crearPila (&pilita,2);
	for (i=0; i<= 10; i++)
		apilar(&pilita,i);
mostarPila(pilita);
}