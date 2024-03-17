
#include <stdio.h>

int main()
{
    float n1[2],n2[2],n3[2],n4[2],n5[2],n6[2],n7[2],n8[2],n9[2],n10[2],maiorAl=-99999,menorAl=99999,numMaior,numMenor;
    int i,j=1;
    
     //prototipo
    /*for(i=0;i<2;i++){
        printf("insira num: ");
        scanf("%d",&n(j)[i]);
    }
    for(i=0;i<2;i++){
        printf("%d",n(j)[i]);
    }*/
    
    printf("Insira o num do aluno(1): ");
    scanf("%f",&n1[0]);
    printf("Insira a altura do aluno(1): ");
    scanf("%f",&n1[1]);
    if(n1[1]>maiorAl){
        maiorAl=n1[1];
        numMaior=n1[0];
    }
    if(n1[1]<menorAl){
        menorAl=n1[1];
        numMenor=n1[0];
    }
    printf("Insira o num do aluno(2): ");
    scanf("%f",&n2[0]);
    printf("Insira a altura do aluno(2): ");
    scanf("%f",&n2[1]);
    if(n2[1]>maiorAl){
        maiorAl=n2[1];
        numMaior=n2[0];
    }
    if(n2[1]<menorAl){
        menorAl=n2[1];
        numMenor=n2[0];
    }
    printf("Insira o num do aluno(3): ");
    scanf("%f",&n3[0]);
    printf("Insira a altura do aluno(3): ");
    scanf("%f",&n3[1]);
    if(n3[1]>maiorAl){
        maiorAl=n3[1];
        numMaior=n3[0];
    }
    if(n3[1]<menorAl){
        menorAl=n3[1];
        numMenor=n3[0];
    }
    printf("Insira o num do aluno(4): ");
    scanf("%f",&n4[0]);
    printf("Insira a altura do aluno(4): ");
    scanf("%f",&n4[1]);
    if(n4[1]>maiorAl){
        maiorAl=n4[1];
        numMaior=n4[0];
    }
    if(n4[1]<menorAl){
        menorAl=n4[1];
        numMenor=n4[0];
    }
    printf("Insira o num do aluno(5): ");
    scanf("%f",&n5[0]);
    printf("Insira a altura do aluno(5): ");
    scanf("%f",&n5[1]);
    if(n5[1]>maiorAl){
        maiorAl=n5[1];
        numMaior=n5[0];
    }
    if(n5[1]<menorAl){
        menorAl=n5[1];
        numMenor=n5[0];
    }
    printf("Insira o num do aluno(6): ");
    scanf("%f",&n6[0]);
    printf("Insira a altura do aluno(6): ");
    scanf("%f",&n6[1]);
    if(n6[1]>maiorAl){
        maiorAl=n6[1];
        numMaior=n6[0];
    }
    if(n6[1]<menorAl){
        menorAl=n6[1];
        numMenor=n6[0];
    }
    printf("\nmaiorAl = %.1f\naluno = %.f\n\n",maiorAl,numMaior);
    printf("menorAl = %.1f\naluno = %.f",menorAl,numMenor);
    
    return 0;
}

