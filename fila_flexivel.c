#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "fila_flexivel.h"

void newFila(Fila *f)
{
	Celula *tmp = malloc(sizeof(Celula));
	tmp->prox = NULL;

	f->inicio = f->fim = tmp;
	f->tam = 0;
}

void enqueue(Fila *f, Aviao dado)
{
	Celula *tmp = malloc(sizeof(Celula));
	tmp->prox = NULL;
	tmp->dado = dado;

	f->fim->prox = tmp;
	f->fim = tmp;

	f->tam++;
}

Aviao dequeue(Fila *f)
{
	if(f->tam == 0){
		printf("FILA VAZIA\n");
		Aviao a;
		strcpy(a.nome, "-1");
		a.id = -1;
		a.envergadura = -1;
		return a;
	}
	else {
		Celula *tmp = f->inicio;
		f->inicio = f->inicio->prox;
		free(tmp);
		f->tam--;
		return f->inicio->dado;
	}	
}

void printFila(Fila *f)
{
	printf("Fila aeroporto\n");
	Celula *tmp = f->inicio->prox;
	while(tmp != NULL){
		printAviao(tmp->dado);
		tmp = tmp->prox;
	}
}

void mostrarPrimeiro(Fila *f)
{
	printf("foo\n");
}
