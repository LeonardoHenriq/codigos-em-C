#include<stdio.h>
#include<stdlib.h>

void matrizIdentidade(int M[][5], int l);
void imprimeMatriz(int M[][5], int l);


main(){
	int Matriz[5][5];
	
	matrizIdentidade(Matriz, 5);

	imprimeMatriz(Matriz,5);

	system("pause");
}

void imprimeMatriz(int M[][5], int l){
	int i, j;
	for(i=0; i<l; i++){
		for(j=0; j<5; j++){
			printf("%d%c", M[i][j], 3);
		}
		printf("\n");
	}
	
}


void matrizIdentidade(int M[][5], int l){
	int i, j;
	for(i=0; i<l; i++){
		for(j=0; j<5; j++){
			if(i==j)
				M[i][j] = 1;
			else
				M[i][j] = 0;
				
				
			
		}
	}	
		
} 
	
