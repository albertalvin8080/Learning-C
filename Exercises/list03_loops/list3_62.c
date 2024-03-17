//https://www.clubedohardware.com.br/forums/topic/681679-ler-tamanho-da-string-sem-espa%C3%A7o/

#include <stdio.h>
#include <string.h>

int main()
{
    char caractere,novaPalavra[1000000];
    int i;
    //numeros
    char n1[]="um",n2[]="dois",n3[]="tres",n4[]="quatro",n5[]="cinco",
        n6[]="seis",n7[]="sete",n8[]="oito",n9[]="nove",n10[]="dez",
        n11[]="onze",n12[]="doze",n13[]="treze",n14[]="catorze",
        n15[]="quinze",n16[]="dezesseis",n17[]="dezessete",n18[]="dezoito",
        n19[]="dezenove",n20[]="vinte",n30[]="trinta",n40[]="quarenta",
        n50[]="cinquenta",n60[]="sessenta",n70[]="setenta",n80[]="oitenta",
        n90[]="noventa",n100[]="cem",n200[]="duzentos",n300[]="trezentos",
        n400[]="quatrocentos",n500[]="quinhentos",n600[]="seiscentos",
        n700[]="setecentos",n800[]="oitocentos",n900[]="novecentos",
        n1000[]="mil",e[]="e",n1002[]="cento";
    
    //Concatenando tudo de uma vez
    for(i=0;i<90;i++){
        strcat(novaPalavra,n1);
        strcat(novaPalavra,n2);
        strcat(novaPalavra,n3);
        strcat(novaPalavra,n4);
        strcat(novaPalavra,n5);
        strcat(novaPalavra,n6);
        strcat(novaPalavra,n7);
        strcat(novaPalavra,n8);
        strcat(novaPalavra,n9);
    }
    for(i=0;i<10;i++){
        strcat(novaPalavra,n10);
        strcat(novaPalavra,n11);
        strcat(novaPalavra,n12);
        strcat(novaPalavra,n13);
        strcat(novaPalavra,n14);
        strcat(novaPalavra,n15);
        strcat(novaPalavra,n16);
        strcat(novaPalavra,n17);
        strcat(novaPalavra,n18);
        strcat(novaPalavra,n19);
        strcat(novaPalavra,n20);
        strcat(novaPalavra,n30);
        strcat(novaPalavra,n40);
        strcat(novaPalavra,n50);
        strcat(novaPalavra,n60);
        strcat(novaPalavra,n70);
        strcat(novaPalavra,n80);
        strcat(novaPalavra,n90);
    }
    strcat(novaPalavra,n100); //sozinho porque o resto eh "cento"
    for(i=0;i>99;i++){
        strcat(novaPalavra,n1002);
    }
    for(i=0;i<100;i++){
        strcat(novaPalavra,n200);
        strcat(novaPalavra,n300);
        strcat(novaPalavra,n400);
        strcat(novaPalavra,n500);
        strcat(novaPalavra,n600);
        strcat(novaPalavra,n700);
        strcat(novaPalavra,n800);
        strcat(novaPalavra,n900);
    }
    for(i=0;i<1611;i++){
        strcat(novaPalavra,e);}
    strcat(novaPalavra,n1000);
    
    //declarando funcoes
    int tamanholinha(char string[]);
    
    //usando as funcoes
    int tamanho = tamanholinha(novaPalavra);
    
    printf("%s\n",novaPalavra);
    printf("%d",tamanho);

    return 0;
}

int tamanholinha(char string[]){
    int quant=0,j=0;
    while(string[j]!='\0'){
        if(string[j]!=' '){
            quant++;
        }
        j++;
    }
    return quant;
}


