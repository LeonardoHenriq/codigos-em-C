#include <stdio.h>
#include <stdlib.h>

 typedef struct pilha{
 	int dados;
 	struct pilha *prox;
 }Elemento;
 
 Elemento* Push(Elemento *Topo, int Dados);
 Elemento* Top(Elemento *Topo);
 Elemento* Pop(Elemento *Topo);
 Elemento* Pop2(Elemento *Topo2);
 void Transferir(Elemento *Topo, Elemento *Topo2);
 
main(){
	int i=0, op=0, dados=0;
	Elemento *Pilha = NULL, *aux ,*PilhaSaida=NULL;
	
	
	do{
		system("cls");
		printf ("[1] - Push ! \n");
		printf ("[2] - Top ! \n");
		printf ("[3] - Pop ! \n");
		printf ("[4] - Transferir ! \n");
		printf ("[0] - Encerrar ! \n");
		scanf("%d",&op);
		switch(op){
		
		case 1:
			printf("Push \n");
			printf("Informe os dados!!!\n");
			scanf("%d",&dados);
			Pilha=Push(Pilha, dados);
			
		    break;
		case 2:
			printf("Top \n");
			aux=Top(Pilha);
		  
		    break;
		case 3:
			printf("Pop \n");
			Pilha=Pop(Pilha);
		    break;
		case 4:
		   printf("Transferir \n");
		   Transferir(Pilha,PilhaSaida);    
		
		case 0:
			printf("Encerrando... \n");
		    break;
		default:
			printf("Opcao invalida! \n");
		    break;					
		
	 }
	 system("pause");
	}while(op !=0);
	
	system("pause");
	
}



Elemento* Push(Elemento *Topo, int Dados){
	Elemento *novo;
	
	novo =(Elemento*) malloc(sizeof(Elemento));
	
	if(novo!=NULL){
	
	novo->dados = Dados;
	novo->prox = Topo;
	Topo = novo;
    }else{
    	printf("%d nao inserido. nenhuma memoria disponivel. \n",Dados);
	}
	return Topo;
}


Elemento* Pop(Elemento *Topo){
	Elemento *aux;
	int valorpop;
	if(Topo==NULL){
		printf("nao e possivel realizar o Pop , A pilha esta vazia");
		return Topo;
	}
	
	if(Topo != NULL) {
		aux = Topo;
		valorpop=Topo->dados;
		Topo = Topo->prox;
		free(aux);
	}
	printf("valor retirado e - %d \n",valorpop);
	return Topo;
}

Elemento* Top(Elemento *Topo){
	if(Topo==NULL){
		printf("A pilha esta vazia\n");
	}else{
	
	printf("%d\n",Topo->dados);
   }
	return Topo;
}

void Transferir(Elemento *Topo, Elemento *Topo2){
	Elemento *aux;
	if(Topo==NULL){
	printf(" A pilha esta vazia!!!\n");

	}else if(Topo2!=NULL){
   	
   	while(Topo2!=NULL){
   	Topo2= Pop(Topo2);
    }
   }else if(Topo2==NULL || Topo!=NULL){
		
      while(Topo!=NULL){
	    aux = Top(Topo);
	    Topo2 = Push(Topo2, aux->dados);
	    Topo = Pop(Topo);
	  }	
	Topo2=Top(Topo2);
   }
}


