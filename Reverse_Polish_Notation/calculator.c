/*
 ============================================================================
 Name        : main.c
 Author      : Albert Alvin
 E-mail		 : aabs2@discente.ifpe.edu.br
 Version     : 10/04/2023
 Copyright   : 
 Description : implementação das funções da calculadora
 ============================================================================
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculator.h"

Pile* new_pile() {
	Pile *ptr = (Pile*) malloc(sizeof(Pile));
	if(ptr == NULL) {
		printf("Error: cannot allocate memory.\n");
		exit(EXIT_FAILURE);
	}
	ptr->top = NULL;
	return ptr;
}

void printfOperation(Pile *pile, char strOperation[]) {
	printf("Operation: %s\n",strOperation);
	double result = Operation(pile, strOperation);
	printf("Result = %.2f\n\n", result);
}

double Operation(Pile *pile, char expression[]) {
	checkForInvalidSymbols(expression);
	
	char *ptr;
	double number;
	Expression_pile *n1, *n2;
	
	int flag = 0;
	ptr = strtok(expression, " ");
	while(ptr) {
		if( ptr[0] == '+' || ptr[0] == '-' || ptr[0] == '*' || ptr[0] == '/' || ptr[0] == ':') {
			
			n1 = pop(pile);
			n2 = pop(pile);
			
			number = performOperation(n2->value, n1->value, ptr[0]);
			push(pile, number);
			
			free(n1);
			free(n2);
			
		} else {
			
			number = atof(ptr);
			push(pile, number);
			
		}
		
		ptr = strtok(NULL, " ");
	}
	checkExpressionCompletion(pile);
	
	n1 = pop(pile);
	number = n1->value;
	free(n1);
	
	return number;
}

void checkForInvalidSymbols(char expression[]) {
	size_t i;
	for(i = 0; i < strlen(expression); ++i) {
		if( !isdigit(expression[i]) && expression[i] != ' ' && expression[i] != '+'
			&& expression[i] != '-' && expression[i] != '*' && expression[i] != ':'
			&& expression[i] != '/'
			) {
			printf("INVALID OPERAND SYMBOL.\n");
			exit(EXIT_FAILURE);
		} 
	}
}

void checkExpressionCompletion(Pile *pile) {
	Expression_pile *aux;
	
	int flag = 0;
	aux = pile->top;
	while(aux) {
		if(flag >= 1){
			printf("MISSING OPERATOR.\n");	
			exit(EXIT_FAILURE);
		}
		++flag;
		aux = aux->next;
	}
	
}

void push(Pile *pile, double number) {
	Expression_pile *aux = (Expression_pile*) malloc(sizeof(Expression_pile));
	
	if(aux) {
		aux->value = number;
		aux->next = pile->top;
		pile->top = aux;
	} else {
		printf("Error: cannot allocate memory.\n");
		exit(EXIT_FAILURE);
	}
	
}

double performOperation(double n1, double n2, char symbol) {
	double result;
	//printf("%.2f %.2f ",n1,n2);
	switch(symbol) {
		case '+':
			result = n1 + n2;
			break;
		case '-':
			result = n1 - n2;
			break;
		case '*':
			result = n1 * n2;
			break;
		case '/':
			if(n2 == 0) {
				printf("DIVISION BY ZERO.\n");
				exit(EXIT_FAILURE);
			}
			result = n1 / n2;
			break;
		case ':':
			if(n2 == 0) {
				printf("DIVISION BY ZERO.\n");
				exit(EXIT_FAILURE);
			}
			result = n1 / n2;
			break;
	}
	return result;
}

Expression_pile* pop(Pile *pile) {
	Expression_pile *aux;
	
	if(pile->top) {
		aux = pile->top;
		pile->top = aux->next;
		return aux;
		
	} else {
		printf("INVALID OPERATION.\n");
		exit(EXIT_FAILURE);
	}
}
