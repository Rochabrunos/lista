#include <stdio.h>
#include <stdlib.h>

#ifndef __estrutura__
#define __estrutura__

struct caixa {
	int value;
	struct caixa* prox;
};

typedef struct caixa Caixinha; 

#endif

void criar_lista (Caixinha **lista);
void inserir_lista(Caixinha **lista, Caixinha *elemento);
void imprime(Caixinha *lista);
void remover_elem(Caixinha **lista, int value);
