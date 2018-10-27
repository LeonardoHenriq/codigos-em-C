#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

 typedef struct nolista{
	char nome[500], mail[500];
	int fone;
	struct nolista *prox;
	struct nolista *ante;
	
 }agenda;
 
 agenda* criarNovo();
 agenda* inserirOrdem(agenda *Lista, agenda *novo);
 agenda* pesquisar(agenda *Lista);
 void imprimirLista(agenda *Lista);
 
 main(){
 	
 	agenda *lista=NULL, *novo, *pesq;
    int i, op;

 
 do{
 	    system("cls");
		printf("Escolha uma das opcoes a seguir: \n");
		printf("[1] - Inserir contato em ordem\n");
		printf("[2] - Pesquisar contato\n");
		printf("[3] - Imprimir a Agenda\n");
		printf("[0] - Sair\n");
		printf("Digite a opcao desejada: ");
		scanf("%d", &op);
		system("cls");
		
	switch(op){
 	case 1:
 		
 		printf("Inserindo contatos em ordem\n");
		novo = criarNovo();
		lista = inserirOrdem(lista,novo);	
 		
 	break;	
 	
 	case 2:
 	printf("Pesquisa\n\n");	
 		
	pesq = pesquisar(lista); 
	
	if(pesq != NULL){
	printf("Dados encontrados\n");
	printf("Nome: %s\n Telefone: %d\n E-mail: %s", pesq->nome, pesq->fone, pesq->mail);
	} else {
	printf("Dados nao encontrados\n");
	}
	    	
 		
 	break;
 		
 	case 3:
 		
 				
		printf("Impressao da lista\n");
		imprimirLista(lista);
 		
 	break;
 	
 	case 0:
			
	printf("Encerrando\n\n");
	break;
		
	default:
			
	printf("Opcao invalida\n\n");
	break;	
 		
  }
  system("pause");
 }while(op != 0);
}

  agenda* criarNovo(){
 	agenda *novo;
 	
 	novo = (agenda*) malloc(sizeof(agenda));
 	fflush(stdin);
	printf("Informe o nome: ");
	gets(novo->nome); 
	
	printf("Informe o telefone: ");
	scanf("%d",&novo->fone);
	
	fflush(stdin);
	printf("Informe o email: ");
	gets(novo->mail);
	
	novo->prox = NULL;
	novo->ante = NULL; 
	
	return novo;
 }
 
  agenda* inserirOrdem(agenda *Lista, agenda *novo){
	agenda *aux = Lista, *anterior;
	
	while(aux!=NULL && strcmp(novo->nome,aux->nome) >=0){
		aux = aux->prox;
	}
	if (aux == Lista) {
		novo->prox = aux;
		if(aux!=NULL) {
			aux->ante = novo;
		}
		Lista = novo;
	} else {
		if(aux!=NULL) {
			anterior = aux->ante;
		} else {
			anterior = Lista;
			while (anterior->prox != aux){
				anterior = anterior->prox;
			}
		}
		novo->prox = aux;
		if(aux!=NULL) {
			aux->ante = novo;
		}
		anterior->prox = novo;
		novo->ante = anterior;
	}
	return Lista;
}

agenda* pesquisar(agenda *Lista){
	agenda *aux;
    char Nome[300];
    fflush(stdin);
	printf("Informe o nome de quem deseja pesquisar: ");
	gets(Nome);
	
	aux = Lista;
	while(aux!=NULL && strcmp(aux->nome, Nome) != 0){
		aux = aux->prox;
	}
	return aux;
}

void imprimirLista(agenda *lista){
	agenda *aux;
	aux = lista;
	while(aux!=NULL){
		printf("Nome: %s\nTelefone: %d\nE-mail: %s\n",aux->nome,aux->fone,aux->mail);
		aux = aux->prox;
	}
	
}
