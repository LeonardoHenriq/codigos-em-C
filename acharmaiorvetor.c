#include<stdio.h>
#include<stdlib.h>

int recursiva (int vetor[], int inicio, int fim);

main(){
	
	int vet[5], i=0, inicio=0,fim=0;
	
	for(i=0;i<5;i++){
		printf("informe o %d Valor",i+1);
		scanf("%d",&vet[i]);
	}
	fim=4;
	recursiva (vet, inicio, fim);
	
}

int recursiva (int vetor[], int inicio, int fim){
	int m=0;
	if(inicio == fim){
		return vetor[inicio];
	}else {
		m= recursiva(vetor,inicio, fim-1);
		if(m>vetor[fim]){
			return m;
		} else {
			return vetor[fim];
		}
	}
}

