#include<stdio.h>
#include<stdlib.h>

int fn(int *v, int tamanho);

main(){
	
	int *vet, i=0, tamanho=0;
	
	printf("Informe o tamanho do vetor!");
	scanf("%d",&tamanho);
	
	vet=(int*) malloc(tamanho *sizeof(int));
	
	for(i=0;i<tamanho;i++){
		printf("informe o %d valor ",i+1);
		scanf("%d",&vet[i]);
	}
	
	
	fn(&vet, tamanho);
	
	
	
	system("pause");
}

int fn(int *v,int tamanho){
	int i=0,busca;
	
	printf ("informe o valor a ser buscado");
	scanf("%d",&busca);
	
	for(i=0;i<tamanho;i++){
		if(v[i]==busca)
			return i;
			
	}
	return -1;
}
