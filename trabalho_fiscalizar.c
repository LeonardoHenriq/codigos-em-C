#include<stdio.h>
#include<stdlib.h>
//passagem de parametro por valor (int qnt)
//passagem de parametro por referencia (float *vimp)
void soma(float *vimp, float *vr,int *a,float *med,int qnt);
void maiorvalor(float *vimp, float *mval, int qnt );

 main(){
    float med, mval,vr, *vimp;
    int qnt,i,a = 0; 

    printf(" Informe a quantidade de pessoas a serem fiscalizadas: \n");
    scanf("%d",&qnt);
     
    vimp = (float*) malloc (qnt*sizeof(float));
    //casting /alocação de qnt vimp vira vetor[qnt]
     
    soma(vimp,&vr,&a, &med, qnt);
    maiorvalor(vimp,&mval,qnt);

    system("cls");
    
    printf(" A soma de todos os valores: %f\n \n=============================\n", vr);
    printf(" A media dos valores: %f\n \n=============================\n", med);
    printf(" O maior valor foi: %f\n \n=============================\n",mval);
    printf(" A quantidade de pessoas acima da media foi: %d\n \n=============================\n",a);

    for(i=0;i<qnt;i++){
        printf(" %d%c valor : %f\n \n=============================\n", i+1,167,vimp[i]); 
    }

    
    
}
void soma(float *vimp, float *vr,int *a,float *med,int qnt){
	int i;
	
	for(i=0;i<qnt;i++){
        printf(" Informe o valor em debito da %d%c pessoa\n",i+1,167);
        scanf("%f",&vimp[i]);
        *vr += vimp[i]; //simplificando vr= vr+vimp[i]
    }

    *med=*vr/qnt; 

    for(i=0; i<qnt;i++){
        if(vimp[i]>*med){ 
            (*a)++; 
        }
    }
}




void maiorvalor(float *vimp, float *mval, int qnt){
    int i;
    
    for(i=0;i<qnt;i++){
        if(vimp[i]>*mval){
            *mval=vimp[i];
        }
    }
}
