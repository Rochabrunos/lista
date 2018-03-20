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

	if( (*descritor).prox == NULL ) { //caso a lista esteja vazia
		descritor->prox = elemento;
	}else {
	
		while(descritor->prox!=NULL) { //caminha na lista 
			descritor = descritor->prox;
		}

		descritor->prox = elemento; //adiciona o elemento apos o ultimo
	}
}

void remover_elem(Caixinha **lista, int value) {
	Caixinha *anterior=NULL, *descritor = *lista;

	while(descritor->prox!=NULL && descritor->value!=value) { //percorre a lista e verifica se o elemento esta presente
		anterior = descritor;
		descritor = descritor->prox;
	}

	if(descritor->prox == NULL) { //teste o caso do elemento ser o último da lista
		
		if(descritor->value == value) { //caso sim remove
			printf("Removendo o elemento: %i.\n", descritor->value);
			anterior->prox = descritor->prox;
		}
		return;
	}

	if(descritor->value == value) { // retira o elemento
		printf("Removendo o elemento: %i.\n", descritor->value);
		anterior->prox = descritor->prox;
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
