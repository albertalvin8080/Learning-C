#include <stdio.h>
#define tam 5
void insere(int *np,int *vp);

int main()
{
	int i,n=8,v[tam];
	insere(&n,&v[0]);
	for(i=0;i<tam;i++){
		printf("%d\n",v[i]);
	}
    return 0;
}
void insere(int *np,int *vp){
	int i;
	for(i=0;i<tam;i++){
		*vp=*np;
		vp++;
	}
}
