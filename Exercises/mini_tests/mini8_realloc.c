#include <stdio.h>
#include <stdlib.h>

void limparBuffer(void);

int main()
{
	int N,N2;
    printf("Insira o tamanho do array(char): ");
	    scanf("%d",&N);
	    limparBuffer();
	    
    char *vc = (char*) malloc(N*sizeof(char));
    
    printf("Insira %d caracteres: ",N);
    for(int i=0;i<N;i++){
    	scanf("%c",&vc[i]);
    	limparBuffer();
	}
	
	printf("Array alocado: ");
	for(int i=0;i<N;i++){
    	printf("%c ",vc[i]);
	}
	
	do{
		printf("\nInsira um tamanho MAIOR para o array(char): ");
		    scanf("%d",&N2);
		    limparBuffer();
		if(N2<=N){
			printf("\nEu disse MAIOR. Tente de novo.");
		}
	}while(N2<=N);
	
	char *vc2 = (char*) realloc(vc,N2*sizeof(char));
	
	printf("\nInsira mais %d caractere(s): ",N2-N);
    for(int i=N;i<N2;i++){
    	scanf("%c",&vc[i]);
    	limparBuffer();
	}
	
	printf("*Novo array alocado: ");
	for(int i=0;i<N2;i++){
    	printf("%c ",vc[i]);
	}
	
    return 0;
}

void limparBuffer(void){
	char c;
	while( (c=getchar()) != '\n' && c != EOF );
}
