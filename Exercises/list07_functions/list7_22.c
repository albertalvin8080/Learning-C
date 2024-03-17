#include <stdio.h>
void linhas(int x);

int main()
{
    int n;
    printf("Insira um num: ");
    scanf("%d",&n);
    
    linhas(n);

    return 0;
}
void linhas(int x){
	int i,j;
	
	for(i=1;i<=x;i++){
		for(j=1;j<=i;j++){
			printf("!");
		}
		printf("\n");
	}
}
