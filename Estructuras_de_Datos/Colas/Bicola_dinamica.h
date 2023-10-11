#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo{
	int dato;
	struct nodo * prox;
}Nodo;

typedef struct{
	Nodo *frente, *fondo;
}Bicola;

void crearBicola (Bicola *b){
	nodo *aux = (nodo*) malloc (sizeof(nodo));
	aux->prox=NULL;
	b->frente = b->fondo = aux;
}

void agregarXfondo (Bicola *b, int x){
	nodo *aux = (nodo*) malloc (sizeof(nodo));
	aux->dato = x;
	aux->prox = NULL;
	b->fondo->prox = aux;
	b->fondo = aux;
}
void agregarXfrente (Bicola *b, int x){
	nodo * aux = (nodo *) malloc (sizeof(nodo));
	b->frente->dato = x;
	aux->prox = b->frente;
	b->frente = aux;
}

void removerXfrente (Bicola *b){
	nodo * aux = b->frente;
	b->frente = b->frente->prox;
	free(aux);
}
	
void removerXfondo (Bicola *b){
	nodo *p = b->fondo;
	nodo * aux = b->frente;
	while (aux->prox != b->fondo)
		aux = aux->prox;
	b->fondo = aux;
	free(p);
} 