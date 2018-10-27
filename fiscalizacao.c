#include<stdio.h>
#include<stdlib.h>

void vid(int Qpes);

main(){
	int Qpes;
	
	 printf(" %c%c Informe a quantidade de pessoas a serem fiscalizadas %c%c\n",4,4,4,4);
	 scanf("%d",&Qpes);
	 	 
	 vid(Qpes);
	 
	 system("pause");
	
	
}
void vid(int Qpes){
	
	int i,a=0;
	float *valorimposto,x[i];
	float Vr=0,med=0,maiorvalor;
	
	valorimposto = (float*) malloc(Qpes*sizeof(float));    
    valorimposto=&Vr;
	
     for(i=0;i<Qpes;i++){
     printf(" %c%c%c%c Informe o valor do imposto a ser cobrado da %d%c pessoa:  %c%c%c%c \n",16,16,16,16,i+1,167,17,17,17,17);
     scanf("%f",&x[i]);        
     
	Vr= Vr+x[i];
	med=*valorimposto/Qpes;
}


for(i=0;i<Qpes;i++){
	printf("%c%c%c%c valor %d: %f %c%c%c%c \n \n================================\n",16,16,16,16,i+1, x[i],17,17,17,17);
}
for(i=0;i<Qpes;i++){
if(x[i]>med){
		a++;
	}
}
	maiorvalor=x[0];
	for(i=0;i<Qpes;i++){
		if(x[i]>maiorvalor){
			maiorvalor=x[i];
		}
	}
	

printf("%c%c%c%c Soma de todos os valores: %f %c%c%c%c \n \n================================\n",16,16,16,16, *valorimposto,17,17,17,17);
printf("%c%c%c%c Media dos valores em debito: %f %c%c%c%c \n \n================================\n",16,16,16,16, med,17,17,17,17); 
printf("%c%c%c%c Quantidade de pessoas acima da media em debito:  %d %c%c%c%c \n \n================================\n",16,16,16,16, a,17,17,17,17);
printf("%c%c%c%c O maior valor em debito e:  %f %c%c%c%c \n \n================================\n",16,16,16,16, maiorvalor,17,17,17,17);	
}
