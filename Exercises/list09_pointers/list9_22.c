#include <stdio.h>
int soma(int *v1p,int tam1,int *v2p,int tam2,int *vsp);

int main()
{
    int tam1=1,tam2=1,i,vs[100],*vsp=&vs[0];
    
    printf("Insira o tamanho do primeiro array: ");
    scanf("%d",&tam1);
    int v1[tam1],*vp1=&v1[0];
    printf("Agora os valores: ");
    for(i=0;i<tam1;i++){
    	scanf("%d",&*vp1);
    	vp1++;
	}vp1=&v1[0];
	
	printf("Agora o tamanho do segundo array: ");
    scanf("%d",&tam2);
    int v2[tam2],*vp2=&v2[0];
    printf("Agora os valores: ");
    for(i=0;i<tam2;i++){
    	scanf("%d",&*vp2);
    	vp2++;
	}vp2=&v2[0];
	
	int check = soma(vp1,tam1,vp2,tam2,&vs[0]);
	if(check==0){
		printf("Impossivel usar tamanhos diferentes de arrays.");
		return 0;
	}
	
	printf("Soma: ");
	for(i=0;i<tam1;i++){
		printf("%d ",*vsp);
		vsp++;
	}
    return 0;
}
int soma(int *v1p,int tam1,int *v2p,int tam2,int *vsp){
	if(tam1!=tam2){
		return 0;
	}
	for(int j=0;j<tam1;j++){
		*vsp=*v1p+*v2p;
		v1p++;
		v2p++;
		vsp++;
	}
	return 1;
}
