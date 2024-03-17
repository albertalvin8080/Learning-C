#include <stdio.h>
int checar(int a, int b, int c);

int main()
{
    int i,j,n[3];
    
    for(i=0;i<3;i++){
    	printf("Insira o lado %d de um triangulo: ",i+1);
    	scanf("%d",&n[i]);
    	if(n[i]<=0){
    		printf("Numero invalido. ");
    		i--;
		}
	}
	int check=checar(n[0],n[1],n[2]);
	if(check==0){
		printf("Nao pode ser um trianglo.");
	}
	if(check==1){
		printf("O triangulo eh escaleno");
	}
	if(check==2){
		printf("O triangulo eh equilatero");
	}
	if(check==3){
		printf("O triangulo eh isoceles");
	}
	
	
    return 0;
}
int checar(int a, int b, int c){
	if(a>b+c || b>a+c || c>a+b){
		return 0;
	}
	else if(a!=b && a!=c && b!=c){
		return 1; //escaleno
	}
	else if(a==b && a==c && b==c){
		return 2; //equilatero
	}
	else if(a==b || a==c || b==c){
		return 3; //isoceles
	}
}
