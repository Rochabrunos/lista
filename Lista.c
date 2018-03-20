#include "lista.h"


int main() {
	Caixinha *lista = NULL;

	criar_lista(&lista);
	if(lista == NULL) {
		printf("null\n");
		exit(1);
	}
	Caixinha elemento;
	elemento.value = 1;
	elemento.prox = NULL;
	inserir_lista(&lista, &elemento);

	Caixinha verde;
	verde.value = 2;
	verde.prox = NULL;
	inserir_lista(&lista, &verde);

	Caixinha azul;
	azul.value = 5;
	azul.prox = NULL;
	inserir_lista(&lista, &azul);

	remover_elem(&lista, 2);

	imprime(lista);
	return 0;
}