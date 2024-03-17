#include <stdio.h>
struct Ponto{
	int x,y;
};
int dentroRet (struct Ponto* v1, struct Ponto* v2, struct Ponto* p);

int main()
{
	struct Ponto v1,v2,p;
    dentroRet(&v1,&v2,&p);

    return 0;
}
int dentroRet (struct Ponto* v1, struct Ponto* v2, struct Ponto* p){
	int i=0;
	printf("Insira x e y de v1: ");
	scanf("%d%d",&v1->x,&v1->y);
	printf("Agora x e y de v2: ");
	while(i==0){
		scanf("%d%d",&v2->x,&v2->y);
		if(v2->x < v1->x || v2->y < v1->y){
			printf("v2(x,y) nao podem ser menores que v1(x,y): ");
		}else{
			i=1;
		}
	}
	printf("Por ultimo, insira x e y de um ponto (p): ");
	scanf("%d%d",&p->x,&p->y);
	
	if(p->x >= v1->x && p->y >= v1->y && p->x <= v2->x && p->y <= v2->y){
		printf("\nO ponto p(x,y) encontra-se dentro do retangulo.");
	}else{
		printf("\nO ponto p(x,y) NAO se encontra dentro do retangulo.");
	}
	
}
