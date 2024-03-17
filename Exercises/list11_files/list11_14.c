#include <stdio.h>
#include <stdlib.h>

struct aniversario{
	int dia,mes,ano,idade;
	char nome[40];
}info[100];

struct dma{
	int d,m,a;
}data;

void dataHoje(void);
int ler(char arq[]);
void novoARQ(int cont);
int nomeIdade(FILE *f);

int main()
{
	char arq[40];
	printf("Insira o ARQ de datas de nascimento: ");
	scanf("%40[^\n]%*c",arq);
    int cont = ler(arq);
    
    novoARQ(cont);

    return 0;
}
void novoARQ(int cont){
	FILE *f2;
	f2=fopen("nomeIdade.txt","w");
	
	for(int i=0;i<cont;i++){
		fprintf(f2,"%s/ %d",info[i].nome,info[i].idade);
	}
	
	fclose(f2);
}
int ler(char arq[]){
	FILE *f;
	f=fopen(arq,"r");
	
	if(f==NULL){
		printf("\nFalha na abertura do arquivo.");
		exit(1);
	}
	
	dataHoje();
	int cont = nomeIdade(f);
	
	fclose(f);
	
	return cont;
}
int nomeIdade(FILE *f){
	int i=0;
	while(fscanf(f,"%40[^/]%*c%d%d%d",info[i].nome,&info[i].dia,&info[i].mes,
	&info[i].ano) != EOF){
		i++;
	}
	
	int anosIdade,mesesIdade,diasIdade;
	for(int j=0;j<i;j++){
		anosIdade = data.a - info[j].ano;
		mesesIdade = data.m - info[j].mes;
		diasIdade = data.d - info[j].dia;
		
		if(mesesIdade<0){
			anosIdade-=1;
		}else if(mesesIdade==0 && diasIdade<0){
			anosIdade-=1;
		}
		info[j].idade = anosIdade;
		
		//printf("\n%s (%d/%d/%d)",info[j].nome,info[j].dia,info[j].mes,info[j].ano);
		//printf("\nIdade: %d",info[j].idade);
	}
	
	return i;
}
void dataHoje(void){
	int aux=0;
	while(aux==0){
		printf("Data de hoje (dd/mm/aaaa): ");
		scanf("%d%*c%d%*c%d",&data.d,&data.m,&data.a);
		aux++;
		//ano
		/*if(data.a<1){
			printf("Data invalida. ");
			aux==0;
		}else*/ 
		if(data.m>12 || data.m<1){
			printf("Data invalida. ");
			aux=0;
		}else if(data.d<1 || data.d>31){
			printf("Data invalida. ");
			aux=0;
		}else if(data.d>28 && data.m==2){
			printf("Data invalida. ");
			aux=0;
		}else if(data.d==31 && (data.m==4 || data.m==6 || data.m==9 || data.m==11)){
			printf("Data invalida. ");
			aux=0;
		}
	}
	//printf("%d %d %d",data.d,data.m,data.a);
}
