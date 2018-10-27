#include<stdio.h>
#include<stdlib.h>

main(){
int i1=0, j1=0, i2=0, j2=0, i=0, j=0,k=0;   
float matrizA[i][j], matrizC[i][j], matrizB[i][j];
int cal;

do{
        printf("[1] - adicao %c \n---\n",43);
		printf("[2] - subtracao %c \n---\n",45);
		printf("[3] - multiplicacao %c \n---\n",42);
		printf("[0] - Encerrar %c  \n---\n",4);
		printf("Escolha a operacao de matriz: ");
		scanf("%d", &cal);
	
switch(cal){
case 1:
//adição
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

if(i1==i2 && j1==j2){

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
			 
                  matrizC[i][j] = matrizA[i][j]  + matrizB[i][j];
                  
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
               	printf("impossivel somar as matrizes informadas!!! \n");
               	
               
			   }
		break;	    
		case 2:	     
			     
			   //subtraçao
			   
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

if(i1==i2 && j1==j2){

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
			 
                  matrizC[i][j] = matrizA[i][j]  - matrizB[i][j];
                  
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
               	printf("impossivel subtrair as matrizes informadas!!! \n");
               	
               
			   }
			   break;
			   case 3:  
			   //multiplicaçao
			   matrizA[i][j]=0;
			   matrizB[i][j]=0;
			   matrizC[i][j]=0;
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
			   
			   break;
			   
			   case 0:
			   	printf(" %c%c%c      Encerrando...      %c%c%c \n------------------\n",4,4,4,4,4,4);
			   
			   break;
			   default:
			printf("Erro!!!\n---------------------\n");
				break;
			   
           }
           
           system("pause");
	}while(cal !=0);
	
}
