#include <stdio.h>
#define tam 5

int main()
{
	int i,v[tam],*vp=&v[0],*manter;
	manter=vp;
	printf("Digite %d numeros: ",tam);
    for(i=0;i<tam;i++){
    	scanf("%d",&*vp);
    	vp++;
	}
	vp=manter;
	for(i=0;i<tam;i++){
		*vp+=1;
		printf("%d ",*vp);
		vp++;
	}

    return 0;
}

