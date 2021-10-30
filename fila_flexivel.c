#include "fila_flexivel.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void create_fila(Fila *f){
	Celula *tmp = malloc(sizeof(Celula));
	tmp->prox = NULL;

	f->inicio = f->fim = tmp;
	f->tam = 0;
}

void enqueue(Fila *f, Aluno dado){
	Celula *tmp = malloc(sizeof(Celula));
	tmp->prox = NULL;
	tmp->dado = dado;

	f->fim->prox = tmp;
	f->fim = tmp;

	f->tam++;
}

Aluno dequeue(Fila *f){

	if(f->tam == 0){
		printf("Fila Vazia!");
		Aluno a;
		strcpy(a.nome, "-1");
		a.nota = -1;
		return a;
	}else{

		Celula *tmp = f->inicio;
		f->inicio = f->inicio->prox;
		free(tmp);
		f->tam--;
		return f->inicio->dado;
	}
	
}

void print_aluno(Aluno a){
	printf("{%s - %d}\n", a.nome, a.nota);
}

void print_fila(Fila *f){
	Celula *tmp = f->inicio->prox;
	while(tmp != NULL){
		print_aluno(tmp->dado);
		tmp = tmp->prox;
	}
}

