#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k=0,comp,aux,t1,t2,quant=0,ind=0,p,t;
    char s1[20],s2[20],s11[20],op,c,c1,c2;
    
    printf("insira uma string de no max. 20 carac.: ");
    	scanf("%20[^\n]%*c",s1);
	printf("Escolha uma opcao no meunu:\n\t"
	"(a)Imprimir o tamanho da string s1\n\t"
	"(b)Comparar a string s1 com uma nova string s2\n\t"
	"(c)Concatenar a string s1 com uma nova string s2\n\t"
	"(d)Imprimir a string s1 de forma reversa\n\t"
	"(e)Contar quantas vezes um cacartere aparece na string s1\n\t"
	"(f)Substituir o primeiro caractere c1 por outro c2\n\t"
	"(g)Verificar se uma nova string s2 eh substring de s1\n\t"
	"(h)Retornar uma substring de s1\n\t");
		scanf("%c%*c",&op);
	
	switch(op){
		case'a':
			printf("O tamanho de s1 eh: %d",strlen(s1));
			break;
			
		case'b':
			printf("Insira a string s2: ");
				scanf("%20[^\n]%*c",s2);
			comp = strcmp(s1,s2);
			if(comp==0){
				printf("s1 e s2 sao iguais.");
			}
			else{
				printf("s1 e s2 nao sao iguais.");
			}
			break;
			
		case'c':
			printf("Insira a string s2: ");
				scanf("%20[^\n]%*c",s2);
			strcat(s1,s2);
			printf("A nova string eh: %s",s1);
			break;
			
		case'd':
			t1 = strlen(s1);
			for(i=0,j=t1-1;i<t1;i++,j--){
				s11[i]=s1[j];
			}
			s11[i]='\0';
			printf("A string s1 reversa fica: %s",s11);
			break;
			
		case'e':
			printf("Insira o caractere: ");
				scanf("%c%*c",&c);
			t1 = strlen(s1);
			for(i=0;i<t1;i++){
				if(s1[i]==c){
					quant++;
				}
			}
			printf("O caractere '%c' aparece %d vezes.",c,quant);
			break;
			
		case'f':
			printf("Insira o caractere que serah substituido: ");
				scanf("%c%*c",&c1);
			printf("Agora o substituidor: ");
				scanf("%c%*c",&c2);
			t1 = strlen(s1);
			for(i=0;i<t1;i++){
				if(s1[i]==c1){
					s1[i]=c2;
					break;
				}
			}
			printf("%s",s1);
			break;
			
		case'g':
			printf("Insira a string s2: ");
				scanf("%20[^\n]%*c",s2);
			t1 = strlen(s1);
			t2 = strlen(s2);
			for(i=0;i<=t1-t2;i++){
    			for(j=0,aux=0;j<t2;j++,aux++){
    				if(s1[i+aux]==s2[j]){
    					k++;
					}
					else{
						k=0;
						break;
					}
					if(k==t2){
						ind=1;
					}
				}
				if(ind==1){
					break;
				}
				k==0;
			}
			if(ind==1){
				printf("s2 estah contido em s1.");
			}
			else{
				printf("s2 NAO estah contido em s1.");
			}
			break;
			
		case'h':
			printf("Informe a partir de qual posicao deve ser formada: ");
				scanf("%d%*c",&p);
			printf("Agora o tamanho da substring: ");
				scanf("%d%*c",&t);
			t1 = strlen(s1);
			t2 = strlen(s2);
			for(i=p-1,j=0;j<t;i++,j++){
				printf("%c",s1[i]);
			}
			break;
	}
	
    return 0;
}

