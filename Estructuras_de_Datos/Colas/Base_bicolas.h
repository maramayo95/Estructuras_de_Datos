#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef BICOLA_H
#define BICOLA_H
#define TAM 100 

typedef struct {
	int vec[TAM];
	int frente,fondo;
	int cantidad;
}Bicola;


void crearBicola (Bicola *b){
	b->cantidad = 0;
	b->frente = 0;
	b->fondo= TAM-1;
}

void agregarXfondo (Bicola *b, int x){
	if (b->cantidad < TAM){
		if (b->fondo == TAM-1)
			b->fondo = 0;
		else
			b->fondo++;
		b->vec[b->fondo] = x;
		b->cantidad++;
	}
}

void agregarXfrente (Bicola *b, int x){
	if (b->cantidad < TAM)
	{
		if (b->frente == 0)
			b->frente = TAM-1;
		else 
			b->frente--;
		b->vec[b->frente] = x;
		b->cantidad++;
	}
}

void removerXfrente (Bicola *b)
{
	if (b->cantidad > 0)
	{
		if  (b->frente == TAM-1)
			b->frente = 0;
		else
			b->frente++;
		b->cantidad--;
	}
}

void removerXfondo (Bicola *b)
{
	if(b->cantidad > 0)
	{
		if(b->fondo == 0)
			b->fondo = TAM -1;
		else
			b->fondo--;
		b->cantidad--;	
    }
}

#endif