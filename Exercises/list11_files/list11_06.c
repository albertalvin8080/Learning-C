#include <stdio.h>
void contarAlfabeto(char caracter,int v[],char str[]);
void printfAlfabeto(int v[],char str[]);

int main()
{
    FILE *f;
    f=fopen("arq.txt","w");
    
    char str[100];
    while(1){
    	printf("Insira uma frase (ou '0'): ");
    	fgets(str,100,stdin);
    	if(str[0]=='0') break;
    	fputs(str,f);
	}
	fclose(f);
	
	int v[26]={0};
	char caracter,alfabeto[27]="abcdefghijklmnopqrstuvwxyz";
	
	f=fopen("arq.txt","r");
	while( (caracter=fgetc(f)) != EOF ){
		contarAlfabeto(caracter,v,alfabeto);
	}
	fclose(f);
	
	printfAlfabeto(v,alfabeto);
	
    return 0;
}
void printfAlfabeto(int v[],char str[]){
	for(int i=0;i<26;i++){
		printf("%c = %d\n",str[i],v[i]);
	}
}
void contarAlfabeto(char caracter,int v[],char str[]){
	for(int i=0;i<26;i++){
		if(caracter == str[i]){
			v[i]++;
		}
	}
}
