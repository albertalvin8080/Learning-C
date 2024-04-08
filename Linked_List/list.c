/*
 ============================================================================
 Name        : list.h
 Author      : Anderson Moreira
 E-mail		 : anderson.moreira@recife.ifpe.edu.br
 Contributor : Albert Alvin
 Version     : 13/06/2012
 Copyright   :
 Description : implementa��o das fun��es de uma lista de inteiros
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
	lst_iitem_t *aux, *destroy;
	
	if(list->first == NULL){
		printf("Cannot destroy: empty list.\n");
		
	} else {
		aux = list->first;
		while(aux != NULL){
			destroy = aux;
			aux = aux->next;
			free(destroy);
		}
		list->first = NULL;
		printf("The list has been destroyed.\n");
	}
	
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
		printf("Error: cannot allocate memory.\n");
	}
	
}


void lst_remove(list_t *list, int value)
{
	lst_iitem_t *remove, *aux;
	
	if(list->first == NULL){
		printf("Cannot remove: empty list.\n");
		
	} else if(list->first->value == value){
		remove = list->first;
		list->first = remove->next;
		free(remove);
		printf("value(%d) removed.\n",value);
		
	} else {
		aux = list->first;
		while(aux->next != NULL && aux->next->value != value){
			aux = aux->next;
		}
		
		if(aux->next != NULL){
			remove = aux->next;
			aux->next = remove->next;
			free(remove);
			printf("value(%d) removed.\n",value);
		} else {
			printf("Error: entity not found.\n");
		}
		
	}
	
}


void lst_print(list_t *list)
{
	lst_iitem_t *aux = list->first;
	
	if(aux != NULL){
		printf("List: ");
		do{
			printf("%d ",aux->value);
			aux = aux->next;
		} while(aux != NULL);
		printf("\n");
		
	} else {
		printf("Cannot printf: empty list.\n");
	}
	
}
