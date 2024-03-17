/*
 ============================================================================
 Name        : main.c
 Author      : Albert Alvin
 E-mail		 : aabs2@discente.ifpe.edu.br
 Version     : 10/04/2023
 Copyright   :
 Description : calculadora RPN (Reverse Polish Notation)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"
#define TAM 4

int main(int argc, char **argv) {
	
	// criando e recebendo pilha
	Pile *pile = new_pile();
	
	// testanto opera��es funcionais
	char matrix[TAM][50] = {"8 4 -", "3 20 5 + +", "10 1 - 6 3 - -", "10 1 - 6 - 3 -"};
	
	int i;
	for(i = 0; i < TAM; ++i) {
		printfOperation(pile, matrix[i]);
	}
	
	// opera��es erradas
	char matrixError[TAM][50] = {"10 1", "10 1 + 1 5", "+ 1 5", "1 5 + A"};
	
	// mudar o �ndice de 'matrixError[]' para outros testes (0 - 3)
	int index = 3;
	printfOperation(pile, matrixError[index]);
	
	// desencargo de consci�ncia
	free(pile); 
	
	return 0;
}


