#include <stdio.h>
int ordena(int *ap,int *bp,int *cp);

int main()
{
    int a,b,c;
    printf("Insira 3 numeros: ");
    scanf("%d%d%d",&a,&b,&c);
    int retorno = ordena(&a,&b,&c);
    if(retorno==0){
    	printf("A: %d\nB: %d\nC: %d",a,b,c);
	}
	else{
		printf("Sao todos iguais.");
	}

    return 0;
}
int ordena(int *ap,int *bp,int *cp){
	int maior=-99999,menor=99999,meio;
	
	if(*ap==*bp && *bp==*cp){
		return 1;
	}
	
	if(*ap>maior){
		maior=*ap;
	}if(*bp>maior){
		maior=*bp;	
	}if(*cp>maior){
		maior=*cp;	
	}if(*ap<menor){
		menor=*ap;
	}if(*bp<menor){
		menor=*bp;
	}if(*cp<menor){
		menor=*cp;
	}if(*ap!=maior && *ap!=menor){
		meio=*ap;
	}if(*bp!=maior && *bp!=menor){
		meio=*bp;
	}if(*cp!=maior && *cp!=menor){
		meio=*cp;
	}
	*ap=menor;
	*bp=meio;
	*cp=maior;
	
	if(*ap!=*bp || *ap!=*cp || *cp!=*bp){
		return 0;
	}
}
