#include "lista.h"

void criar_lista (Caixinha **lista) {
	if (*lista == NULL) {
		*lista = (Caixinha*) malloc (sizeof(Caixinha));
		(*lista)->prox = NULL;
		(*lista)->prox = 0;
	}else {
		printf("A lista já existe.\n");
	}
} 

void inserir_lista(Caixinha **lista, Caixinha *elemento) {
	Caixinha *descritor = *lista;

	if( (*descritor).prox == NULL ) {
		descritor->prox = elemento;
	}else {
	
		while(descritor->prox!=NULL) {
			descritor = descritor->prox;
		}

		descritor->prox = elemento;
	}
}

void imprime(Caixinha *lista) {
	Caixinha *descritor = lista->prox;
	int i=1;
	while(descritor != NULL) {
		printf("Elemento %i : %i\n", i, descritor->value);
		descritor = descritor->prox;
		i++;
	}
}
