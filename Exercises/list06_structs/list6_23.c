#include <stdio.h>

int checaData(int d,int m);
int mesesParaDias(int d,int m);
int bissexto(int Amenor,int Amaior);

struct dma{
	int dia,mes,ano;
}info1,info2;

int main()
{
	int i,Amenor,Amaior,diaMaior,diaMenor,cd=0;
    
    while(cd==0){
    	printf("Insira uma data no formato (dd/mm/aaaa): ");
	    scanf("%d%*c%d%*c%d",&info1.dia,&info1.mes,&info1.ano);
	    cd = checaData(info1.dia,info1.mes);
	    if(cd==0){
	    	printf("Data invalida. ");
		}
	}
	
	cd=0;
	while(cd==0){
    	printf("Insira outra data no formato (dd/mm/aaaa): ");
    	scanf("%d%*c%d%*c%d",&info2.dia,&info2.mes,&info2.ano);
		cd = checaData(info2.dia,info2.mes);
	    if(cd==0){
	    	printf("Segunda data invalida. ");
		}
	}
	
	int dia1 = mesesParaDias(info1.dia,info1.mes);
	int dia2 = mesesParaDias(info2.dia,info2.mes);
	if(dia1>dia2){
		diaMaior=dia1;
		diaMenor=dia2;
	}
	else if(dia1<=dia2){
		diaMaior=dia2;
		diaMenor=dia1;
	}
	
	if(info1.ano>info2.ano){
		Amaior=info1.ano;
		Amenor=info2.ano;
	}
	else if(info1.ano<=info2.ano){
		Amaior=info2.ano;
		Amenor=info1.ano;
	}
    
    int bi = bissexto(Amenor,Amaior);
    
    int diasEntre = (Amaior-Amenor)*365 + (diaMaior-diaMenor) + bi;
    printf("\nA quantidade de dias entre as duas datas eh de %d.",diasEntre);
	
    return 0;
}
int bissexto(int Amenor,int Amaior){
	int j,bi=0;
	for(j=Amenor;j<=Amaior;j++){
		if(j%4==0 && j%100!=0){
			bi++;
			continue;
		}
		else if(j%4==0 && j%100==0 && j%400==0){
			bi++;
			continue;
		}
	}
	return bi;
}
int checaData(int d,int m){
	if(d<1){
		return 0;
	}
	if(m>12 || m<1){
		return 0;
	}
	else if(d>31){
		return 0;
	}
	else if(d>28 && m==2){
		return 0;
	}
	else if(d==31 && (m==4 || m==6 || m==9 || m==11)){
		return 0;
	}
	return 1;
}
int mesesParaDias(int d,int m){
	int dias;
	if(m==1){
		dias = 31-(31-d);
		return dias;
	}
	if(m==2){
		dias = 31+28-(28-d);
		return dias;
	}
	if(m==3){
		dias = 31+28+31-(31-d);
		return dias;
	}
	if(m==4){
		dias = 31+28+31+30-(30-d);
		return dias;
	}
	if(m==5){
		dias = 31+28+31+30+31-(31-d);
		return dias;
	}
	if(m==6){
		dias = 31+28+31+30+31+30-(30-d);
		return dias;
	}
	if(m==7){
		dias = 31+28+31+30+31+30+31-(31-d);
		return dias;
	}
	if(m==8){
		dias = 31+28+31+30+31+30+31+31-(31-d);
		return dias;
	}
	if(m==9){
		dias = 31+28+31+30+31+30+31+31+30-(30-d);
		return dias;
	}
	if(m==10){
		dias = 31+28+31+30+31+30+31+31+30+31-(31-d);
		return dias;
	}
	if(m==11){
		dias = 31+28+31+30+31+30+31+31+30+31+30-(30-d);
		return dias;
	}
	if(m==12){
		dias = 31+28+31+30+31+30+31+31+30+31+30+31-(31-d);
		return dias;
	}
}

