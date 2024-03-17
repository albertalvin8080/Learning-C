/*
 ============================================================================
 Name        : list.h
 Author      : Anderson Moreira
 E-mail		 : anderson.moreira@recife.ifpe.edu.br
 Version     : 13/06/2011
 Copyright   :
 Description : definições e declarações de uma lista de inteiros
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>


/* lst_iitem -cada elemento da lista aponta para o próximo elemento */
typedef struct lst_iitem {
	int value;
	struct lst_iitem *next;
} lst_iitem_t;

/* list_t */
typedef struct {
	lst_iitem_t *first;
} list_t;

/* lst_new - aloca memória para list_t e inicializa este */
list_t* lst_new();

/* lst_destroy - libera memória de list_t e todos os seus itens */
void lst_destroy(list_t *);

/* lst_insert - insere um novo item com o valor 'value' na lista 'list' */
void lst_insert(list_t *list, int value);

/* lst_remove - remove o primeiro item com o valor 'value' da lista 'list' */
void lst_remove(list_t *list, int value);

/* lst_print - imprime o conteúdo da lista 'list' para a saída padrão */
void lst_print(list_t *list);
