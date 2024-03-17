#include <stdio.h>

typedef struct{
	int dia,mes,ano;
}Data;

typedef struct{
	char compromisso[60];
	Data data;
}Agenda;

int main()
{
	int i,A,M;
    Agenda agenda[5];
    
    for(i=0;i<5;i++){
    	printf("Insira um compromisso n%d: ",1+i);
    	scanf("%60[^\n]%*c",agenda[i].compromisso);
    	printf("Agora a data no formato dd/mm/aaaa: ");
    	scanf("%d%*c%d%*c%d%*c",&agenda[i].data.dia,
			&agenda[i].data.mes,&agenda[i].data.ano);
	}
	
	printf("\nInsira um mes: ");
	scanf("%d",&M);
	printf("E um ano: ");
	scanf("%d",&A);
	
	for(i=0;i<5;i++){
		if(M==agenda[i].data.mes && A==agenda[i].data.ano){
			printf("\n- Compromisso: %s\n",agenda[i].compromisso);
			printf("- Data: %d/%d/%d\n",agenda[i].data.dia,
			agenda[i].data.mes,agenda[i].data.ano);
		}
	}
    

    return 0;
}

