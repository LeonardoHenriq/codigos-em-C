#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int buscaBinariaRec(int v[], int inicio, int fim, int busca);

main (){
	int tam, i, posicao, busca,inicio=0,fim=0;
	int Vetor[20];
	//Variáveis para medir o tempo
	clock_t t_inicio, t_final;
	float tempo;
	
	printf("Informe o tamanho do Vetor!\n");
	scanf("%d",&tam);
	
	for(i=0; i<tam; i++){
		printf("V[%d] = ",i);
		scanf("%d", &Vetor[i]);
	}
	
	printf("\nDigite o valor que deseja procurar: ");
	scanf("%d", &busca);
	
	inicio =0;
	fim= tam-1;
	t_inicio = clock();
	posicao = buscaBinariaRec(Vetor,inicio,fim , busca);
	t_final = clock();
		
	if(posicao == -1)
		printf("\nO valor nao foi encontrado\n\n");
	else
		printf("\nO valor foi encontrado na posicao %d\n\n", posicao);
	
	tempo = ((float)t_final - (float)t_inicio)/CLOCKS_PER_SEC;
	printf("O tempo para encontrar o valor no vetor foi  de %f segundos\n\n", tempo);
	
}

int buscaBinariaRec(int v[], int inicio, int fim, int busca){
	int meio;
	
    if(inicio>fim){
    	return -1;
	}else{
		meio=(inicio+fim)/2;
		if(v[meio]==busca){
			return meio;
		}else if(v[meio]>busca){
			return buscaBinariaRec(v,inicio,meio-1,busca);
		}else {
			return buscaBinariaRec(v,meio+1,fim,busca);
		}
	}
	
	
}
