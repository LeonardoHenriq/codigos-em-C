#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main (){

	char Texto[200];
	int qntPalavras = 0, i=0;
	
	printf("digite um texto: ");
	gets(Texto);
	
	for(i=0;i<strlen(Texto);i++){
		if(Texto[i] != ' '){
			if(i == 0){
				qntPalavras++;
			} else if(Texto[i-1] == ' '){
				qntPalavras++;
			}
		}
	}
	printf("Existem %d palavras. ", qntPalavras);
	printf("Existem %d caracteres. ", strlen(Texto));
	system("pause");
	
}
