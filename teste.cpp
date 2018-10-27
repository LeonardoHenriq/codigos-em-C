#include<stdio.h>
#include<stdlib.h>

main(){
	int m[15][15], i,j;
		for(i=0;i<15;i++){
		for(j=0;j<15;j++){
		
		m[i][j]=0;
	}
	}
	
		for(i=0; i<15; i++){
		   for(j=0; j<15; j++){
		if (m[i][j]==0 )
			printf("%c ",3);
		}
		printf("\n");
	}
}
