#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct structcadastrar{
	
	char Nome[50];
	int codigo;
	float valor;
	
}cadastrar;

void imprimir(cadastrar item);

main(){
	cadastrar P1,P2,P3,P4;
	
	fflush(stdin);
	printf("Informe o nome do item: ");
	gets(P1.Nome);
	
	printf("Informe o codigo do item: ");
	scanf("%d",P1.codigo);
	
	printf("Informe o valor do item: ");
	scanf("%f",P1.valor);
	
	fflush(stdin);
	printf("Informe o nome do item: ");
	gets(P2.Nome);
	
	printf("Informe o codigo do item: ");
	scanf("%d",P2.codigo);
	
	printf("Informe o valor do item: ");
	scanf("%f",P2.valor);
	
	fflush(stdin);
	printf("Informe o nome do item: ");
	gets(P3.Nome);
	
	printf("Informe o codigo do item: ");
	scanf("%d",P3.codigo);
	
	printf("Informe o valor do item: ");
	scanf("%f",P3.valor);
	
	fflush(stdin);
	printf("Informe o nome do item: ");
	gets(P4.Nome);
	
	printf("Informe o codigo do item: ");
	scanf("%d",P4.codigo);
	
	printf("Informe o valor do item: ");
	scanf("%f",P4.valor);
	


    imprimir(P1);
    imprimir(P2);
	imprimir(P3);
	imprimir(P4);
	
	system("pause");	
}
 
 void imprimir(cadastrar item){
 	printf("\n\n");
 	printf("Nome do item: %s",item.Nome);
 	printf("Telefone: %d",item.codigo);
 	printf("Salario: %f",item.valor);
 	
 }


