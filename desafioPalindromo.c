#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	char frase[200], palindromo[200];
	int condicao=1, i=0, j=0;
	
	printf("digite a Frase: \n");
	gets(frase);
	
	for(i=strlen(frase);i>0;i--){
		palindromo[j]=frase[i];
		j=j+1;
	}
	for(i=0;i<strlen(frase);i++){
		if(palindromo == frase){
			condicao=0;
		}else if(palindromo != frase){
			condicao=1;
			break;
		}
		
	}
	printf("\n%d\n", condicao);
	printf(" Se o valor for igual a 1 a palavra NAO e palindoromo\n Se  valor for igual a 0 a palavra E palindromo\n");
	
	
	
	system("pause");
}
