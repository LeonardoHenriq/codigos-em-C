#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct structcadastro{
  char Nome[50], endereco[100];
  int telefone, cpf;
  
  	
}cadastro;

void imprimir(cadastro parametro);

main(){
	cadastro P1,P2,P3;
	
	fflush(stdin);
	printf("Informe o nome: ");
	gets(P1.Nome);
	fflush(stdin);
	printf("Informe o endereço: ");
	gets(P1.endereco);
	
	printf("informe o cpf : ");
	scanf("%d",P1.cpf);
	
	printf("informe o telefone: ");
	scanf("%d",P1.telefone);
	fflush(stdin);
	printf("Informe o nome: ");
	gets(P2.Nome);
	fflush(stdin);
	printf("Informe o endereço: ");
	gets(P2.endereco);
	
	printf("informe o cpf : ");
	scanf("%d",P2.cpf);
	
	printf("informe o telefone: ");
	scanf("%d",P2.telefone);	
	
	fflush(stdin);
	printf("Informe o nome: ",P3.Nome);
	gets(P3.Nome);
	fflush(stdin);
	printf("Informe o endereço: ", P3.endereco);
	gets(P3.endereco);
	
	printf("informe o cpf : ");
	scanf("%d",P3.cpf);
	
	printf("informe o telefone: ");
	scanf("%d",P3.telefone);
	
	imprimir(P1);
	imprimir(P2);
	imprimir(P3);
}

void imprimir(cadastro parametro){
	
	printf("Nome: %s \n Endereco: %s \n cpf: %d \n telefone: %d \n", parametro.Nome,parametro.endereco,parametro.cpf,parametro.telefone);
	

}
