#include<stdio.h>
#include<stdlib.h>

void soma(float *vr,float *vimp ,int qnt, float *med, int *a, float *mval);

 main(){
    float med, mval,vr, *vimp;
    int qnt,i,a = 0; 

    printf("informe a quantidade de pessoas a serem fiscalizadas: \n");
    scanf("%d",&qnt);
    vimp= (float*) malloc (qnt *sizeof(float));
    
    soma(&vr,&vimp, qnt, &med, &a, &mval); 
    

    printf("a soma de todos os valores: %f\n", vr);
    printf("a media dos valores: %f\n", med);
    printf("o maior valor foi: %f\n",mval);
    printf("a quantidade de pessoas acima da media foi: %d\n",a);

    for(i=0;i<qnt;i++){
        printf(" %d valor : %f\n", i+1,vimp); 
    }

    system("pause");
}

void soma(float *vr, float *vimp,int qnt, float *med, int *a, float *mval){
    int i;
    
	
    for(i=0;i<qnt;i++){
        printf("informe o valor em debito da %d%c pessoa\n",i+1,167);
        scanf("%f",&vimp[i]);
        *vr = *vr+vimp[i]; 
    }

    *med=*vr/qnt; 

    for(i=0; i<qnt;i++){
        if(vimp[i]>*med){ 
            (*a)++; 
        }
    }

for(i=0;i<qnt;i++){
        if(vimp[i]>*mval){
            *mval=vimp[i];
        }
    }

}


