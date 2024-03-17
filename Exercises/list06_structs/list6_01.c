#include <stdio.h>
struct horario{
	int hora,minuto,segundo;
};
struct data{
	int dia,mes,ano;
};
struct compromisso{
	int data[40],horaC[40];
	char texto[500];
};

int main()
{
	struct horario tempo = {10,34,58};
	struct data dat = {4,5,2006};
	struct compromisso info;
	
	printf("Insira uma data (dd/mm/aa): ");
	scanf("%40[^\n]%*c",info.data);
	printf("Agora um horario (hh:mm:ss): ");
	scanf("%40[^\n]%*c",info.horaC);
	printf("Por ultimo, insira um comentario: ");
	scanf("%500[^\n]%*c",info.texto);
	
	printf("%s\n%s\n%s",info.data,info.horaC,info.texto);
	
    //printf("%d:%d:%d",tempo.hora,tempo.minuto,tempo.segundo);
    //printf("\n%d/%d/%d",dat.dia,dat.mes,dat.ano);
    

    return 0;
}

