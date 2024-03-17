/*
 ============================================================================
 Name        : main.c
 Author      : Anderson Moreira
 E-mail		 : anderson.moreira@recife.ifpe.edu.br
 Version     : 13/06/2012
 Copyright   :
 Description : entendimento do funcionamento de código POSIX de uso em SO
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/*
 * programa main
 */

int main(int argc, char *argv[])
{
	list_t *list;
 	
	printf("<<START>>\n");

	/* inicialização da lista */
	list = lst_new();

	/* insert several elements into list */
	lst_insert(list, 1);
	lst_insert(list, 3);
	lst_insert(list, 2);
	lst_insert(list, 0);
	lst_insert(list, 9);
	lst_insert(list, 5);
	
	/* imprime lista 'list' */
	lst_print(list);

	/* remove elementos da lista */
	lst_remove(list, 1);
	lst_remove(list, 2);
	lst_remove(list, 5);

	/* imprime lista */
	lst_print(list);

	/* limpa a lista */
	lst_destroy(list);
	
	/* imprime lista */
	lst_print(list);

	printf("<<END>>\n");

	system("pause");

	return 0;
}
