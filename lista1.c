#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct noLista {
	int info;
	struct noLista *prox;
} Elemento;

Elemento* inserirInicio(Elemento *Lista, Elemento *novo);
void imprimir(Elemento *Lista);

main(){
	Elemento *Lista = NULL, *novo;
	
	novo = (Elemento*) malloc (sizeof(Elemento));
	printf("Infome um inteiro: ");
	scanf("%d",&novo->info);
	novo->prox= NULL;
	
	
	Lista =novo;
	
	
}
