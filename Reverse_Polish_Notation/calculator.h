/*
 ============================================================================
 Name        : main.c
 Author      : Albert Alvin
 E-mail		 : aabs2@discente.ifpe.edu.br
 Version     : 10/04/2023
 Copyright   : 
 Description : definições das funções e estruturas dinâmicas
 ============================================================================
 */
 
#include <stdio.h>
#include <stdlib.h>

typedef struct expression_pile {
	double value;
	struct expression_pile *next;
}Expression_pile;

typedef struct {
	Expression_pile *top;
}Pile;

Pile* new_pile();

void printfOperation(Pile *pile, char strOperation[]);

double Operation(Pile *pile, char expression[]);

void checkForInvalidSymbols(char expression[]);

void checkExpressionCompletion(Pile *pile);

void push(Pile *pile, double number);

double performOperation(double n1, double n2, char symbol);

Expression_pile* pop(Pile *pile);
