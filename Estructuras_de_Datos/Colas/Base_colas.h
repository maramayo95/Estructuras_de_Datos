#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef COLA_H
#define COLA_H

typedef int boolean;
#define false 0
#define true != false

typedef struct {
	int vect[100];
	int frente,fondo;
	int cantidad;
}cola;

void inicializarCola (cola *c){
	c->frente = -1;
	c->fondo = -1;
	c->cantidad = 0;
	
}

void agregarPorFondo(cola *c, int i){
	if (c->fondo == c->cantidad){
        printf("no hay espacio");
    }
    c->fondo++;
    c->vect[c->fondo] = i;
	c->cantidad++;
}

void removerPorFrente (cola *c){
	c->frente++;
}

int esColavacia (cola *c){
	return c->frente == NULL;
}

void verFrente (cola *c){
	printf("%d",c->frente);
}

void verFondo (cola *c){
	printf("%d",c->fondo);
}

void agegarPorFrente (cola *c, int i){
	c->frente++;
    c->vect[c->frente] = i;
	c->cantidad++;
}

void removerPorFondo (cola *c){
    c->fondo--;
}


#endif