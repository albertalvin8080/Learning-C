#include <stdio.h>
#include <string.h>

void lerD(int,int,int);

int main()
{
    int dia,mes,ano,i,j;
    printf("Digite uma data: ");
        scanf("%d%*c%d%*c%d",&dia,&mes,&ano);
    //printf("%d/%d/%d",dia,mes,ano);
    
 	lerD(dia,mes,ano);
    
    return 0;
}
void lerD(int x, int y, int z){
	switch(y){
		case 1:
			printf("%d de Janeiro de %d",x,z);
			break;
		case 2:
			printf("%d de Fevereiro de %d",x,z);
			break;
		case 3:
			printf("%d de Marco de %d",x,z);
			break;
		case 4:
			printf("%d de Abril de %d",x,z);
			break;
		case 5:
			printf("%d de Maio de %d",x,z);	
			break;
		case 6:
			printf("%d de Junho de %d",x,z);
			break;
		case 7:
			printf("%d de Julho de %d",x,z);
			break;
		case 8:
			printf("%d de Agosto de %d",x,z);
			break;
		case 9:
			printf("%d de Setembro de %d",x,z);
			break;	
		case 10:
			printf("%d de Outubro de %d",x,z);
			break;
		case 11:
			printf("%d de Novembro de %d",x,z);	
			break;
		case 12:
			printf("%d de Dezembro de %d",x,z);	
			break;				
	}
	if(y>=13){
		printf("DATA INVALIDA");
	}
}

