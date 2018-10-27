#include <stdio.h>
#include <stdlib.h>

main(){
	int *vet, qnt;
	int aux=0, i=0,j=0;
	printf("informe o tamanho do vetor");
	scanf("%d",&qnt);
	
	vet=(int*) malloc(qnt *sizeof(int));
	
	for(i=0;i<qnt;i++){
		printf("informe o %d valor\n\n",i+1);
		scanf("%d",&vet[i]);
		
	}
	for(i=0;i<qnt-1;i++){
		for(j=i+1;j<qnt;j++){
			if(vet[i]>vet[j]){
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
			}
			
		}
	}
	for(i=0;i<qnt;i++){
		
		printf("%d\n"), vet[i];
	}
	
	system("pause");
}
