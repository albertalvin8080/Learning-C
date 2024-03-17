#include <stdio.h>
int retMaior(int *p,int tam);

int main()
{
	int i,j,k=0,N=0,cont=0;
	
	while(N<1){
	    printf("Insira o tamanho do vetor: ");
		scanf("%d",&N);
		if(N<1){
			printf("Valor invalido. ");
		}
	}
	int v[N],*vp=&v[0];
	
	printf("Agora os valores: ");
	for(i=0;i<N;i++){
		scanf("%d",&*vp);
		vp++;
	}vp=&v[0];
	
	while(k<1){
		printf("Insira um valor K: ");
		scanf("%d",&k);
		if(k<1){
			printf("Valor invalido. ");
		}
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<k;j++){
			if(cont==N){
				break;
			}
			printf("%d ",*vp);
			vp++;
			cont++;
		}
		printf("\n");
		if(cont==N){
			break;
		}
	}
	
	int maior = retMaior(&v[0],N);
	printf("Maior valor = %d",maior);
	
    return 0;
}
int retMaior(int *p,int tam){
	int maior=-99999;
	for(int l=0;l<tam;l++){
		if(*p>maior){
			maior=*p;
		}
		p++;
	}
	return maior;
}
