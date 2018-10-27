#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

main(){
	char palavras[200], aux;
	int contador, i;
	
	printf("digite uma palavra: ");
	gets(palavras);
	
	
	for(i=0;i<26;i++){
		palavras[i]=0;
		
	}
	for(i=0;i<strlen(palavras);i++){
		palavras[i]=toupper(palavras[i]);
		
		if(palavra[i]>=65 && palavras[i] <=90){
			
		}
	}
	printf("quantidade de letras repetidas ");
}
