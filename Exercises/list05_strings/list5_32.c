#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,t1,aux=1;
    char data[20],dia[2],mes[2],ano[4];
    
    printf("Insira uma data no formato DD/MM/AAAA: ");
    	scanf("%20[^\n]%*c",data);
    	
    t1 = strlen(data);
	for(i=0;i<2;i++){
		if(data[i]!='9'&&data[i]!='8'&&data[i]!='7'&&data[i]!='6'&&
		   data[i]!='5'&&data[i]!='4'&&data[i]!='3'&&data[i]!='2'&&
		   data[i]!='1'&&data[i]!='0'){
			printf("Valor nao numerico inserido na data.\n");
			aux=0;
			break;	   	
		}
	}
	if(data[2]!='/'){
		aux=0;
		printf("Limitador da data (/) faltando ou em posicao errada.");
	}
	//parada 1
	if(aux!=1){
		return 0;
	}
	//dia
	for(i=0;i<2;i++){
		dia[i]=data[i];
	}
	
	for(i=3;i<5;i++){
		if(data[i]!='9'&&data[i]!='8'&&data[i]!='7'&&data[i]!='6'&&
		   data[i]!='5'&&data[i]!='4'&&data[i]!='3'&&data[i]!='2'&&
		   data[i]!='1'&&data[i]!='0'){
			printf("Valor nao numerico inserido na data.\n");
			aux=0;
			break;	   	
		}
	}
	if(data[5]!='/'){
		aux=0;
		printf("Limitador da data (/) faltando ou em posicao errada.");
	}
	//parada 2
	if(aux!=1){
		return 0;
	}
	//mes
	for(i=0,j=3;i<2;i++,j++){
		mes[i]=data[j];
	}
	
	for(i=6;i<t1;i++){
		if(data[i]!='9'&&data[i]!='8'&&data[i]!='7'&&data[i]!='6'&&
		   data[i]!='5'&&data[i]!='4'&&data[i]!='3'&&data[i]!='2'&&
		   data[i]!='1'&&data[i]!='0'){
			printf("Valor nao numerico inserido na data.");
			aux=0;
			break;	   	
		}
	}
	//parada 3
	if(aux!=1){
		return 0;
	}
	//ano
	for(i=0,j=6;i<4;i++,j++){
		ano[i]=data[j];
	}
	
	int diaI = atoi(dia);
	int mesI = atoi(mes);
	int anoI = atoi(ano);
	printf("%d/%d/%d",diaI,mesI,anoI);
	
    return 0;
}
