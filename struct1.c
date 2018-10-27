#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct structPessoa{
    char  Nome[50];
	int idade;
	float salario;
		
}Pessoa;

void imprimir (Pessoa parametro);

main() {
	
	Pessoa P1;
	
	printf("Informe o nome: ");
	gets(P1.Nome);
	printf("Informe a idade: ");
	scanf("%d",&P1.idade );
	printf("Informe o salario: ");
	scanf("%f",&P1.salario);
	
    imprimir(P1);	
    system("pause");
}
void imprimir (Pessoa parametro){
	
	printf("\n\n");
	printf("Nome %s  , Idade %d , Salario %f", parametro.Nome,parametro.idade,parametro.salario);
}

