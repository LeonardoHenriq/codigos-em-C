#include<stdio.h>
#include<stdlib.h>

 main(){
    float med=0, mval=0, vr=0, *vimp;
    int qnt=0, i=0, a = 0; 
 
    printf(" Informe a quantidade de pessoas a serem fiscalizadas: \n");
    scanf("%d",&qnt);
     
    vimp = (float*) malloc (qnt*sizeof(float));
    
      for(i=0;i<qnt;i++){
        printf(" Informe o valor em debito da %d%c pessoa\n",i+1,167);
        scanf("%f",&vimp[i]);
        vr =vr+ vimp[i]; 
    }

    med=vr/qnt; 

    for(i=0; i<qnt;i++){
        if(vimp[i]>med){ 
            a++; 
        }
    }
    for(i=0;i<qnt;i++){
        if(vimp[i]>mval){
            mval=vimp[i];
        }
    }

  

    
    
    printf(" A soma de todos os valores: %f \n \n=============================\n", vr);
    printf(" A media dos valores: %f \n \n=============================\n", med);
    printf(" O maior valor foi: %f \n \n=============================\n",mval);
    printf(" A quantidade de pessoas acima da media foi: %d \n \n=============================\n",a);

    for(i=0;i<qnt;i++){
        printf(" %d%c valor : %f \n \n=============================\n", i+1,167,vimp[i]); 
    }

}
    


