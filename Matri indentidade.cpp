#include<stdio.h>
#include<stdlib.h>

void matrizIdentidade(int M[][50], int l);
void imprimeMatriz(int M[][50], int l);


main(){
	int Matriz[50][50];
	
	matrizIdentidade(Matriz, 50);

	imprimeMatriz(Matriz,50);

	system("pause");
}

void imprimeMatriz(int M[][50], int l){
	int i, j;
	for(i=0; i<l; i++){
		for(j=0; j<50; j++){
		if (M[i][j]==0 )
			printf("%c ",3);
		}
		printf("\n");
	}
	
}


void matrizIdentidade(int M[][50], int l){
	int i, j;
	for(i=0; i<l; i++){
		for(j=0; j<50; j++){
			M[i][j]= 0;
		}
	}	
		
}
