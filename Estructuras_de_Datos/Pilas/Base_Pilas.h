#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef PILA_H
#define PILA_H

typedef int boolean;
#define false 0
#define true != false

#include <stdlib.h>
typedef
 struct{
	int *vec;
	int tope;
	int tam;
}Pila;

void CrearPila (Pila *p, int n)
{
    p->vec = (int*) malloc (10*sizeof(int));
	p->tope=-1;
	p->tam=n;
}

boolean esVacia (Pila p)
{
	return p.tope ==-1;
}

int VerTope (Pila p)
{
	return p.vec[p.tope];
}

void desapilar (Pila *p)
{
	(p->tope)--;
}

void apilar (Pila *p, int x)
{
	int *aux;
    int i;
	if (p->tope == p->tam -1)
	{	
		aux = (int *) malloc (2* p->tam*sizeof(int));
	for (i=0; i < p->tam; i++)
		aux[i] = p->vec[i]; 
	p->vec = aux;
	p->tam = p->tam * 2;
	}(p->tope)++;
p->vec[p->tope] = x;
}

#endif 