#include <stdio.h>
void simplifica(int *np,int *dp);

int main()
{
	int n,d;
    printf("Insira o numerador: ");
    scanf("%d",&n);
    printf("Agora o denominador: ");
    scanf("%d",&d);
    
    simplifica(&n,&d);
    printf("Simplificacao: %d/%d",n,d);

    return 0;
}
void simplifica(int *np,int *dp){
	int i;
	for(i=2;i<=*np && i<=*dp; ){
		if(*np%i==0 && *dp%i==0){
			*np/=i;
			*dp/=i;
		}else{
			i++;
		}
	}
}
