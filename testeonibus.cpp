#include<stdio.h>
#include<stdlib.h>

   int PriHor(int L1[11][4]);
   void Imphor1(int fil, int col);
 
   int SegHor(int L2[11][4]);
   void Imphor2(int fil, int col);
   
   int TerHor(int L3[11][4]);
   void Imphor3(int fil, int col);
   
   int QuarHor(int L4[11][4]);
   void Imphor4(int fil, int col);
   
main(){
	
	int horarios;
	int L1[11][4], L2[11][4], L3[11][4], L4[11][4]; 
	int fil, col;
	
	 do {
		
		printf("[1] - 09:00 hrs \n");
		printf("[2] - 11:00 hrs \n");
		printf("[3] - 15:00 hrs \n");
		printf("[4] - 19:00 hrs \n");
		printf("[0] - Encerrar!\n");
		printf("Escolha o horario: ");
		scanf("%d", &horarios);
	

	
	 switch(horarios){
			case 1: 
			       
					PriHor(L1);
					Imphor1(fil, col);						
				break;
			case 2:
				SegHor(L2);
				Imphor2(fil, col);
				
				break;
			case 3:
				TerHor(L3);
				Imphor3(fil, col);
				break;
			case 4:
				QuarHor(L4);
				Imphor4(fil, col);
				break;
			case 0:
				printf("--Encerrando--\n");
				break;
			default:
			printf("Erro!!!\n");
				break;
           }
           
           system("pause");
    }while(horarios != 0);

}
                                             //Primeiro horario//
    int PriHor(int L1[11][4]){
    	
    int l1[11][4];
    int i, j;
	 
	 for(i=0; i<11; i++){
	 	for(j=0; j<4; j++){
	 	    l1[i][j]=0;
	  }
	 }
     printf("\n");
	 
	 return l1[11][4];	
     	
	 }
	 void Imphor1(int fil, int col){
	 	int f, c;
	 	int L1[11][4];
	 	int i,j;
	 	
	 	printf("escolha uma fileira:");
	 	scanf("%d", &f);
	 	
	 	printf("escolha uma coluna:");
	 	scanf("%d", &c);
	 	
	 	if(L1[f][c]==0){
	 		L1[f][c]=1;
	 		printf("vazio!");
	 		
		 }else{
		 	printf("ocupado!");
		 }
		 printf("\nResultado\n");

   printf("\n--Lugares--\n");
	for(i=0; i<11; i++){ 
		for(j=0; j<4; j++){
			printf("%d\t ",L1[i][j]);
		}
		printf("\n");
		
		
	}
		 
		 
		 
	 }
	                                           //Segundo horario//
	 int SegHor(int L2[11][4]){
    	
    int l2[11][4];
    int i, j;
	 
	 for(i=0; i<11; i++){
	 	for(j=0; j<4; j++){
	 	    l2[i][j]=0;
	  }
	 }
     printf("\n");
	 
	 return l2[11][4];	
     	
	 }
	 void Imphor2(int fil, int col){
	 	int f, c;
	 	int L2[11][4];
	 	int i,j;
	 	
	 	printf("escolha uma fileira:");
	 	scanf("%d", &f);
	 	
	 	printf("escolha uma coluna:");
	 	scanf("%d", &c);
	 	
	 	if(L2[f][c]==0){
	 		L2[f][c]=1;
	 		printf("vazio!");
	 		
		 }else{
		 	printf("ocupado!");
		 }
		 
		 printf("\n--Lugares--\n");
	for(i=0; i<11; i++){ 
		for(j=0; j<4; j++){
			printf("%d\t ",L2[i][j]);
		}
		printf("\n");
		
	}
		 
	 }
	                                 //Terceiro horario//
	 int TerHor(int L3[11][4]){
    	
    int l3[11][4];
    int i, j;
	 
	 for(i=0; i<11; i++){
	 	for(j=0; j<4; j++){
	 	    l3[i][j]=0;
	  }
	 }
     printf("\n");
	 
	 return l3[11][4];	
     	
	 }
	 void Imphor3(int fil, int col){
	 	int f, c;
	 	int L3[11][4];
	 	int i,j;
	 	
	 	printf("escolha uma fileira:");
	 	scanf("%d", &f);
	 	
	 	printf("escolha uma coluna:");
	 	scanf("%d", &c);
	 	
	 	if(L3[f][c]==0){
	 		L3[f][c]=1;
	 		printf("vazio!");
	 		
		 }else{
		 	printf("ocupado!");
		 }
		 
		printf("\n--Lugares--\n");
	for(i=0; i<11; i++){ 
		for(j=0; j<4; j++){
			printf("%d\t ",L3[i][j]);
		}
		printf("\n");
		
	}
		 
	 }
	 
	 //quarto horario
	int QuarHor(int L4[11][4]){
    	
    int l4[11][4];
    int i, j;
	 
	 for(i=0; i<11; i++){
	 	for(j=0; j<4; j++){
	 	    l4[i][j]=0;
	  }
	 }
     printf("\n");
	 
	 return l4[11][4];	
     	
	 }
	 void Imphor4(int fil, int col){
	 	int f, c;
	 	int L4[11][4];
	 	int i,j;
	 	
	 	printf("escolha uma fileira:");
	 	scanf("%d", &f);
	 	
	 	printf("escolha uma coluna:");
	 	scanf("%d", &c);
	 	
	 	if(L4[f][c]==0){
	 		L4[f][c]=1;
	 		printf("vazio!");
	 		
		 }else{
		 	printf("ocupado!");
		 }
		 
		 printf("\n--Lugares--\n");
	for(i=0; i<11; i++){ 
		for(j=0; j<4; j++){
			printf("%d\t ",L4[i][j]);
		}
		printf("\n");
		
	}
		 
	 }

