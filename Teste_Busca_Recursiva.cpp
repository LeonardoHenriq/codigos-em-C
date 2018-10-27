#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int BuscaBinaria(int *v, int inicio,int fim,int busca);

main(){
	int tamanho,i, busca, inicio=0,fim=0,pos;
	
	
	printf("informe o tamanho do vetor\n\n");
	scanf("%d",&tamanho);
	
	int V[tamanho];
	
	for(i=0;i<tamanho;i++){
		
		printf("V=[%d] ",i);
		scanf("%d",&V[i]);
	}
	
	printf("informe o valor da busca \n\n");
	scanf("%d",&busca);
	
	fim=tamanho-1;
	pos=BuscaBinaria(V,inicio,fim,busca);
	if(pos==-1){
		printf("valor nao encontrado\n\n");
	}else {
		printf("valor encontrado na posicao %d\n\n",pos);
	}
	
	system("pause");
}

int BuscaBinaria(int *v, int inicio,int fim,int busca){
	int meio=0;
	
	if(inicio>fim){
		return -1;
	}else{
		meio=(inicio+fim)/2;
		if(v[meio]==busca){
			return meio;
		}else if(v[meio]>busca){
			return BuscaBinaria(v,inicio,meio-1,busca);
		}else{
			return BuscaBinaria(v,meio+1,fim,busca);
		}
	}
	
}
