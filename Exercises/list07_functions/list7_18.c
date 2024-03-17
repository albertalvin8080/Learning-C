#include <stdio.h>
int expo(int x,int y);

int main()
{
	int n,ex;
    printf("Insira um numero: ");
    scanf("%d",&n);
    printf("Agora o expoente: ");
    scanf("%d",&ex);
    
    int resul=expo(n,ex);
    printf("Resultado = %d",resul);

    return 0;
}
int expo(int x,int y){
	int i,resul=1;
	for(i=0;i<y;i++){
		resul*=x;
	}
	return resul;
}
