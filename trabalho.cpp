#include<stdio.h>
#include<stdlib.h>
 
float* soma(float *vr ,int qnt, float *med, int *a);
void maiorvalor(float *vimp, float *mval, int qnt );
 
int main(){
     float med, mval,vr;
     int qnt,i,a = 0;
 
    printf("informe a quantidade de pessoas a serem fiscalizadas: \n");
    scanf("%d",&qnt);
 
    float* vimp = soma(&vr, qnt, &med, &a);
    maiorvalor(vimp,&mval,qnt);
    
    system("cls");
    
    printf(" A soma de todos os valores: %f\n \n=============================\n", vr);
    printf(" A media dos valores: %f\n \n=============================\n", med);
    printf(" O maior valor foi: %f\n \n=============================\n",mval);
    printf(" A quantidade de pessoas acima da media foi: %d\n \n=============================\n",a);
 
    for(i=0;i<qnt;i++){
        printf(" %d valor : %f\n \n=============================\n", i+1,vimp[i]);
    }
 
    free(vimp);
    return 0;
}
float* soma(float *vr,int qnt, float *med, int *a){
    int i;
    float *vimp = (float*) malloc (qnt*sizeof(float));
    for(i=0;i<qnt;i++){
        printf("informe o valor em debito da %d%c pessoa\n \n=============================\n",i+1,167);
        scanf("%f",&vimp[i]);
        *vr += vimp[i];
    }
 
    *med=*vr/qnt;
 
    for(i=0; i<qnt;i++){
        if(vimp[i]>*med){
            (*a)++;
        }
    }
 
    return vimp;
}
 
void maiorvalor(float *vimp, float *mval, int qnt){
    int i;
    for(i=0;i<qnt;i++){
        if(vimp[i]>*mval){
            *mval=vimp[i];
        }
    }
}

