
#include <stdio.h>

int main()
{
    char l;
    float n1,n2,n3,media;
    
    printf("Insira a primeira nota: ");
        scanf("%f",&n1);
    printf("Agora a segunda: ");
        scanf("%f",&n2);
    printf("Por ultimo a terceira: ");
        scanf("%f",&n3);
        
    printf("Digite (a) ou (p): ");
        scanf("%*c%c",&l);
    
    void func(float x,float y, float z, char l);
    func(n1,n2,n3,l);
    
    
    return 0;
}
void func(float x,float y, float z,char l){
    float media;
    
    if(l=='a' || l=='A'){
        media = (x+y+z)/3;
        printf("A media eh = %.2f",media);
    }
    else if(l=='p' || l=='P'){
        media = ((x*5)+(y*3)+(z*2))/(5+3+2);
        printf("A media ponderada eh = %.2f",media);
    }
    else{
        printf("CARACTER ERRADO SEU BABACA");
    }
    
}
