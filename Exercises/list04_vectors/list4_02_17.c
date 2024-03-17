#include <stdio.h>
#define l 10
#define c 3

int main()
{
    int i,j,m[l][c],p[3]={0},menor=11,aux[10];
    int p1=0,p2=0,p3=0;
	
	for(i=0;i<l;++i){
		printf("Insira as notas do aluno %d: ",i+1);
		for(j=0;j<c;j++){
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<l;i++){
		for(j=0;j<c;++j){
			if(m[i][j]<menor){
				menor=m[i][j];
				p[j]=1;
			}
		}
		if(p[2]==1){
			p3++;
		}
		else if(p[1]==1){
			p2++;
		}
		else if(p[0]==1){
			p1++;
		}
		menor=11;
		for(j=0;j<3;j++){ //zera o vetor piorNota(p)
			p[j]=0;
		}
	}
	printf("Piores na prova 1: %d\nPiores na prova 2: %d\nPiores na prova 3: %d",p1,p2,p3);
	
	
    return 0;
}

