#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	int i=0,j=0;
    char texto[200]; 
    printf("Digite um Texto :\n"); 
    gets(texto); 
    
    for(i=0;texto[i] != '\0'; i++){	
	  if(texto[i]!= ' '){
	  	if(texto[i+1]==' '){
		  
	     texto[j]=texto[i];
	     j++;
	    }
	  }
    	
	}
    texto[j]='\0';
       
    
    printf("\n %s \n", texto);
    
	system("pause");
	
}
