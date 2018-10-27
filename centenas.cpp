#include<stdio.h>
#include<stdlib.h>

void fun(int v, int *v1, int *v2, int *v3);

main(){
	int v;
	int v1,v2,v3;
	
	printf("informe o valor: \n");
	scanf("%d",&v);
	
	fun(v,&v1,&v2,&v3);
	
	printf("o numero %d possui %d centenas, %d dezenas, %d unidade \n",v, v1,v2,v3);
}
void fun(int v, int *v1,int *v2, int *v3){
	
	

	*v1=v/100;
	*v2=v%100/10;
	*v3=v%10/1;
	
	
	
}
