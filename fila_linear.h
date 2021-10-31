#include <stdio.h>
#include "aviao.h"

typedef struct Celula{
	Aviao dado;
	struct Celula *prox;
}Celula;

typedef struct Fila{
	Celula *inicio;
	Celula *fim;
	int tam;
}Fila;

void createFila(Fila *f);

void enqueue(Fila *f, Aviao dado);

Aviao dequeue(Fila *f);

void printFila(Fila *f);

