#include<stdio.h>
#include<stdlib.h>

main(){
	int fat=0, num=0;
	
	printf("Digite o numero para saber seu fatorial...\n");
	scanf("%d",&num);
	
	for(fat=1;num>1;num=num-1){
	
		fat=fat*num;
		printf("%d\n",fat);
		
	}
	printf("O Fatorial de %d , eh %d",num,fat);
}
