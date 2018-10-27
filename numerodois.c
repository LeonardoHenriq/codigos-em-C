#include<stdio.h>
#include<stdlib.h>

main(){
	int n1 , res, dig;
	printf("informe -1 para parar");
	scanf("%d",&n1);
	do{
	
	printf("digite um numero , informe -1 para parar");
	scanf("%d",&n1);
	
	
	res=n1%28;
	
	
	
	printf("%d\n\n",res);
}while(n1!=-1);
	system("pause");
	
}
