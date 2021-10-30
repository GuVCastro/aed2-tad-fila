/*****************************************************************************************
 * NOME DO ARQUIVO: main.c 
 * 
 * AUTOR: Gustavo Valadares Castro
 *
 * DESCRIÇÃO:	Programa de estacionamento utilizando os conceitos de fila
 *
 * OBSERVAÇÕES:
 *				Repositório: https://github.com/GuVCastro/aed2-tad-pilha
 *				Compilador: gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0 
 *
 * MUDANÇAS:
 *				DATA		AUTOR	DETALHES
 *				2021/10/29	Gustavo	Esqueleto do código
 ****************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fila_linear.h"
#include "fila_flexivel.h"
#include "aviao.h"

int main(void) {
	
	srand(time(NULL));

	Fila fila;
	newFila(&fila);
	int n = 10, opcao = -1;

	/*for(int i=0; i<n; i++){
		Aluno a;
		sprintf(a.nome, "Aluno %d", rand()%n);
		a.nota = rand()%100;
		enqueue(&fila, a);
	}*/

	printFila(&fila);

	while (opcao == -1) {
		printf("Programa Aeroporto Fila\n");
	}

	return 0;
}
