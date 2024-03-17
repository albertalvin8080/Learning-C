#include <stdio.h>

int main()
{
    FILE *f;
    f=fopen("arq.txt","w");
    
    int contador=0;
    char str[100],c,comp;
    while(1){
    	printf("Insira um texto (0 pra terminar): ");
    	fgets(str,100,stdin);
    	if(str[0]=='0') break;
    	fputs(str,f);
	}
	fclose(f);
	
	printf("Agora insira um caractere qualquer: ");
	scanf("%c",&c);
	
	f=fopen("arq.txt","r");
	
	while( (comp=fgetc(f)) != EOF ){
		if(c==comp){
			contador++;
		}
	}
	fclose(f);
	
	if(contador==0){
		printf("\nO caractere '%c' nao foi encontrado.",c);
	}else{
		printf("\nO caractere '%c' aparece %d vez(es).",c,contador);
	}

    return 0;
}
