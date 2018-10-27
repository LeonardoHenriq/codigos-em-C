#include <stdio.h>
#include <stdlib.h>


main(){


int i1, j1, i2, j2, i, j, k;   
float matrizA[i][j],matrizC[i][j] ,matrizB[i][j];




printf("primeira matriz \n--------------------------\n");
printf("\n Informe a quntidade de linhas das matrizes : ");
scanf("%d",&i1);
printf("\n\n Informe a quantidade de colunas das matrizes : ");
scanf("%d",&j1);

printf("segunda matriz \n--------------------------\n");
printf("\n Informe a quntidade de linhas das matrizes : ");
scanf("%d",&i2);
printf("\n\n Informe a quantidade de colunas das matrizes : ");
scanf("%d",&j2);

if(j1==i2){

//primeira matriz
for(i=0; i<i1; i++){
           for(j=0; j<j1; j++){
                    printf("\n\n Informe o valor da %d%c Linha e da %d%c Coluna da Matriz A: ", i+1, 167, j+1, 167);  
                    scanf("%f", &matrizA[i][j]);
                    }
                    printf("\n");
                    }
 
//segunda matriz
for(i=0; i<i2; i++){
           for(j=0; j<j2; j++){
                    printf("\n\n Informe o valor da %d%c Linha e da %d%c Coluna da 2%c Matriz B: ", i+1, 167, j+1, 167, 167);  
                    scanf("%f", &matrizB[i][j]);
                    }
                    printf("\n");
                    }   
				
//resultados

printf("---------------------------- 1 - Matriz Gerada ---------------------------------\n\n");
for(i=0; i<i1; i++){
           for(j=0; j<j1; j++){
                   printf("%6.f", matrizA[i][j]);                    
                   }
                   printf("\n\n");
                   }
printf("---------------------------- 2 - Matriz Gerada ---------------------------------\n\n");
for(i=0; i<i2; i++){
           for(j=0; j<j2; j++){
                   printf("%6.f", matrizB[i][j]);                    
                   }
                   printf("\n\n");
                   }
                   
for(i=0; i<j1; i++){
         matrizC[i][j]=0;
         for(j=0; j<j1; j++){
         	for(k=0;k<j1;k++){
			 
                  matrizC[i][j] = matrizC[i][j] + (matrizA[i][k]  * matrizB[k][j]);
                  
				  }
                  }
                  }
                  printf("\n\n");
printf("---------------------------- 3 - Matriz Gerada ---------------------------------\n\n");
for(i=0; i<i1; i++){
           for(j=0; j<j2; j++){
                   printf("%6.f", matrizC[i][j]);                    
                   }
                   printf("\n\n");
                   }             
                   printf("\n\n");
                   
               }else{
               	printf("impossivel multiplicar as matrizes informadas!!! \n");
               	
               
			   }
		   
			   
      system("pause");
}
