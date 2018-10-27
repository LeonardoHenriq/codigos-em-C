#include<stdio.h>
#include<stdlib.h>

   struct stackNode{
	int data;
	struct stackNode *nextPtr;

  };

  typedef struct stackNode StackNode;
  typedef StackNode *StackNodePtr;
  

  void push(StackNodePtr *topPtr, int info);
  int pop(StackNodePtr *topPtr);
  int isEmpty(StackNodePtr topPtr);

  main(){
	StackNodePtr stackPtr =NULL;
	
	int choice=0, value=0;
	

	do{
		system("cls");
		printf("Digite a escolha: \n");
	    printf("[1] - Push \n");
	    printf("[2] - Pop \n");
	    printf("[0] - Encerrar programa \n");
	    scanf("%d",&choice);
	    
		switch(choice){
		
		case 1:
			printf("Digite um valor : ");
			scanf("%d",&value);
			push(&stackPtr, value);
			break;
		case 2:
			if(!isEmpty(stackPtr)){
				printf("o valor retirado e %d.\n",pop(&stackPtr));
			}
		    break;
		default :
			printf("Encerrado \n\n");
		    break;	
		}
		
	}while(choice!=0);
	printf("Pressione qualquer tecla para encerrar. \n");
	system("pause");
}
 
   void push(StackNodePtr *topPtr, int info){
   	StackNodePtr newPtr;
  
   	
   	newPtr =malloc (sizeof(StackNode));
   	
   	
   	if(newPtr != NULL){
   		newPtr->data = info;
   		newPtr->nextPtr= *topPtr;
   		*topPtr= newPtr;
    }else{
	   	printf("%d nao inserido, Nenhuma memoria disponivel. \n",info);
	   }
   	
   }
   
   int pop(StackNodePtr *topPtr){
   	StackNodePtr tempPtr;
   	int popValue;
   	
   	tempPtr= *topPtr;
   	popValue=( *topPtr)->data;
   	*topPtr=( *topPtr)->nextPtr;
   	free(tempPtr);
   	return popValue;
   	
   }
   
   int isEmpty(StackNodePtr topPtr){
   	
   	return topPtr ==NULL;
   	
   }
