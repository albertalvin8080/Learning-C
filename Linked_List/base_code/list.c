/*
 ============================================================================
 Name        : list.h
 Author      : Anderson Moreira
 E-mail		 : anderson.moreira@recife.ifpe.edu.br
 Version     : 13/06/2012
 Copyright   :
 Description : implementação das funções de uma lista de inteiros
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include "list.h"

list_t* lst_new()
{
	list_t *list;
	list = (list_t*) malloc(sizeof(list_t));
	list->first = NULL;
	return list;
}


void lst_destroy(list_t *list)
{
	printf("lst_destroy\n");
}


void lst_insert(list_t *list, int value)
{
	lst_iitem_t *aux, *novo = (lst_iitem_t*) malloc(sizeof(lst_iitem_t));
	
	if(novo != NULL){
		novo->next = NULL;
		novo->value = value;
		
		if(list->first == NULL){
			list->first = novo;
		} else {
			aux = list->first;
			while(aux->next != NULL){
				aux = aux->next;
			}
			aux->next = novo;
		}	
		
	} else {
		printf("Memoria nao alocada.");
	}
	
}


void lst_remove(list_t *list, int value)
{
	printf("lst_remove: value=%d\n", value);
}


void lst_print(list_t *list)
{
	printf("lst_print\n");
}
