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
agenda* inserirInicio(agenda *Lista, agenda *novo);
agenda* inserirFinal(agenda *Lista, agenda *novo);
agenda* inserirOrdem(agenda *Lista, agenda *novo);
agenda* pesquisar(agenda *Lista);
agenda* removerInicio(agenda *Lista);
agenda* removerFinal(agenda *Lista);
agenda* removerContato(agenda *Lista);
void imprimirLista(agenda *Lista);

main(){
    agenda *lista=NULL, *novo, *pesq;
    int i, op;
    
 
 do{
 	    system("cls");
		printf("Escolha uma das opcoes a seguir: \n");
		printf("[1] - Inserir contato no inicio\n");
		printf("[2] - Inserir contato no final\n");
		printf("[3] - Inserir contato em ordem\n");
		printf("[4] - Pesquisar contato\n");
		printf("[5] - Remover contato do inicio\n");
		printf("[6] - Remover contato do final\n");
		printf("[7] - Remover contato\n");
		printf("[8] - Imprimir a Agenda\n");
		printf("[0] - Sair\n");
		printf("Digite a opcao desejada: ");
		scanf("%d", &op);
		system("cls");
 	
 	switch(op){
 		case 1:
 			
		printf("Inserindo contato no inicio\n");
		novo = criarNovo();
		lista = inserirInicio(lista,novo);
		break;
		
	    case 2:
	    printf("Inserindo contato no final\n");
		novo = criarNovo();
	    lista = inserirFinal(lista,novo);
	
		break;
	    case 3:
	    printf("Inserindo contatos em ordem\n");
		novo = criarNovo();
		lista = inserirOrdem(lista,novo);	
	    	
		break;
	    case 4:
	 
	    printf("Pesquisa\n\n");
	    
		pesq = pesquisar(lista);
		 if(pesq != NULL){
		  printf("Dados encontrados\n");
			printf("Nome: %s\n Telefone: %d\n E-mail: %s\n\n", pesq->nome, pesq->fone, pesq->mail);
			} else {
				printf("Dados nao encontrados\n");
			}
	    	
		break;
	    case 5:
	    printf("Remover contato do inicio\n");
		lista = removerInicio(lista);
	    	
		break;
	    case 6:
	    printf("Remover contato do final\n");
		lista = removerFinal(lista);
	    	
		break;
	    case 7:	
		printf("Remover Contato\n\n");
		
		lista = removerContato(lista);	
		
		break;
		case 8:
			
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
 	int i=0;
 	
 	novo = (agenda*) malloc(sizeof(agenda));
 	fflush(stdin);
	printf("Informe o nome: ");
	gets(novo->nome); 
	
	for(i=0;novo->nome[i]!=' ';i++){
		novo->nome[i]=toupper(novo->nome[i]);
	}
	
	printf("Informe o telefone: ");
	scanf("%d",&novo->fone);
	
	fflush(stdin);
	printf("Informe o email: ");
	gets(novo->mail);
	
	novo->prox = NULL;
	novo->ante = NULL; 
	
	return novo;
 }
 
 agenda* inserirInicio(agenda *lista, agenda *novo){
 	
 	novo->prox = lista;
	if(lista != NULL) {
		lista->ante = novo;
	}
	
	lista = novo;
	return novo;
 }
 
 agenda* inserirFinal(agenda *Lista, agenda *novo){
	agenda *ultimo = Lista;
	
	if(Lista == NULL){
		Lista = novo;
	} else {
		while(ultimo->prox != NULL){
			ultimo = ultimo->prox;
		}
		ultimo->prox = novo;
		novo->ante = ultimo;
	}
	return Lista;
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
	int i=0;
	char nome[300];
	
	fflush(stdin);
	printf("Informe o nome de  quem deseja pesquisar: \n");
	gets(nome);
	
	for(i=0;nome[i]!=' ';i++){
		nome[i]=toupper(nome[i]);
	}
	
	aux = Lista;
	while(aux!=NULL && strcmp(aux->nome, nome)!=0){
		aux= aux->prox;
	}
	return aux;
}
agenda* removerInicio(agenda *Lista){
	agenda *remover;
	
	if (Lista != NULL) {
		remover = Lista;
		Lista = Lista->prox;
		free(remover);
	}
	return Lista;
}

agenda* removerFinal(agenda *Lista){
	agenda *ultimo, *penultimo=NULL;
	
	if(Lista != NULL) {
		ultimo = Lista;
		while(ultimo->prox != NULL) {
			ultimo = ultimo->prox;
		}
		if (Lista != ultimo) {
			penultimo = Lista;
			while(penultimo->prox != ultimo){
				penultimo = penultimo->prox;
			}
			penultimo->prox = NULL;
		} else {
			Lista = NULL;
		}
		free(ultimo);
	}
	return Lista;
}

 agenda* removerContato(agenda *Lista){
 	agenda *remover, *anterior;
    char Pesquisa[300];
    int i=0;
    
    fflush(stdin);
	printf("Digite o Contato a ser excluido: \n\n");
	gets(Pesquisa);
 
    for(i=0;Pesquisa[i]!=' ';i++){
      Pesquisa[i]=toupper(Pesquisa[i]);
	}
	
	 
	if(Lista !=NULL){
		remover=Lista;
		if (remover != NULL){
			if(strcmp(remover->nome,Pesquisa)==0) {
				Lista = Lista->prox;
			} else{
				anterior = Lista;
				while(strcmp(remover->nome,anterior->prox->nome)!=0){
					anterior = anterior->prox;
				}
				anterior->prox = remover->prox;
			}
			free(remover);
		} else {
			printf("Contato nao encontrado\n");
		}
	} else {
		printf("Nao ha contatos a remover\n");
	}
	return Lista;
}



void imprimirLista(agenda *lista){
	agenda *aux;
	aux = lista;
	while(aux!=NULL){
		printf("Nome: %s\nTelefone: %d\nE-mail: %s\n",aux->nome,aux->fone,aux->mail);
		aux = aux->prox;
	}
	
}
