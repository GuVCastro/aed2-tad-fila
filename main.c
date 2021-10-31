/*****************************************************************************************
 * NOME DO ARQUIVO: main.c 
 * 
 * AUTOR: Gustavo Valadares Castro
 *
 * DESCRIÇÃO:	Programa de aeroporto utilizando os conceitos de fila
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
//#include "fila_linear.h"
#include "fila_flexivel.h"

int main(void) {
	
	srand(time(NULL));

	Fila fila;
	newFila(&fila);
	Aviao a;
	int opcao = -1;

	while (opcao != 0) {
		printf("*****************************************\n");
		printf("Programa Aeroporto Fila\n");
		printf("[1] Inserir aviao\n");
		printf("[2] Remover aviao\n");
		printf("[3] Mostrar avioes na fila\n");
		printf("[4] Mostrar primeiro aviao\n");
		printf("[0] Sair\n");
		printf("*****************************************\n");
		printf("Insira uma das opcoes acima: ");
		scanf("%d", &opcao);

		switch (opcao) {
			case 0:
				printf("Ate mais!\n");
				break;
			case 1:
				printf("Nome do aviao: "); scanf("%s", a.nome);
				printf("Id do aviao: "); scanf("%d", &a.id);
				printf("Envergadura do aviao (m): "); scanf("%d", &a.envergadura);
				enqueue(&fila, a);
				break;
			case 2:
				dequeue(&fila);
				break;
			case 3:
				printFila(&fila);
				break;
			case 4:
				mostrarPrimeiro(&fila);
				break;
			default: printf("OPCAO INVALIDA\n");
				break;
		}
	}

	return 0;
}
