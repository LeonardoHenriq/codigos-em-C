#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
main() {
    char frase[200] ;
    int j = 0, i=0;
	char aux = '\0';
    
    
    printf("Digite um Texto :\n"); 
    gets(frase); 
    
    
   for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ' || aux != ' ') {
            frase[j] = frase[i];
            j++;
       	    aux = frase[i];
        }
    }
    frase[j] = '\0';
    
    
    printf("Novo Texto:\n %s\n", frase);
    system("pause");
}
