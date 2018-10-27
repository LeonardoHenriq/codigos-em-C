#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct estrutura{
    int dados ;
    int ini;
    int fim;
}fila;

typedef struct str{
    int dados ;
    int ini;
    int fim;
}pilha;

void fila_entrar(fila);
void fila_sair();
void fila_mostrar();
void menu_mostrar ();
void pilha_mostrar();
void pilha_mover();


 main(){
    
    int op=1; 
   
    while(op!=0){
        system("cls");
        fila_mostrar();
        pilha_mostrar();
        menu_mostrar();
        scanf("%d", &op);
        switch(op){
        case 1:
            fila_entrar();
            break;
        case 2:
            fila_sair();
            break;
        case 3:
            pilha_mover();
            break;
        }
    }
    return(0);
}


void fila_entrar(fila){
	int tamanho=0;
	printf("Informe o tamanho da fila");
	scanf("%d",&tamanho);
	
    if(fila->fim==tamanho){
        printf("\nA fila está cheia\n");
        system("Pause");
    }else{
        printf("\nDigite o valor a ser inserido: ");
        scanf("%d", &fila->dados[fila->fim]);
        fila->fim++;
    }
}


void fila_sair(){
	int tamanho=0, i=0;
	printf("Informe o tamanho da fila");
	scanf("%d",&tamanho);
	
	
    if(fila->ini==fila->fim){
        printf("\nA fila esta vazia, adicione algum valor\n");
        system("Pause");
    }else{
       
        for(i=0;i<tamanho;i++){
            fila->dados[i]=fila->dados[i+1];
        }
        fila->dados[fila->fim]=0;
        fila->fim--;
    }
}

//mostra o conteudo da fila
void fila_mostrar(){
	
	int tamanho=0, i=0;
	printf("Informe o tamanho da fila");
	scanf("%d",&tamanho);
	
    printf("[ ");
    for(i=0;i<tamanho;i++){
        printf(" %d", fila->dados[i]);
    }
    printf(" ]\n\n");
}

//mostra o menu de opções
void menu_mostrar(){
    printf("\nEscolha uma opção:\n");
    printf("1- Incluir na fila\n");
    printf("2- Excluir da fila\n");
    printf("3- Mover para a pilha\n");
    printf("0-Sair\n\n");
}

//mostrar conteudo da pilha
void pilha_mostrar(){
    int tamanho=0, i=0;
	printf("Informe o tamanho da pilha");
	scanf("%d",&tamanho);
	
    printf("[ ");
    for(i=0;i<tamanho;i++){
        printf(" %d", pilha->dados[i]);
    }
    printf(" ]\n\n");
}


void pilha_mover(){
    pilha->fim = fila->fim;
    do{
        if(fila->ini == fila->fim){
            printf("\nNada foi adicionado a fila para inverter\n\n");
            system("pause");
            break;
        }
        else{
            pilha->dados[pilha->ini]=fila->dados[pilha->fim];
            pilha->fim--;
            pilha->ini++;
        }
    }
    while (pilha->fim==0);
}
