#include <stdio.h>
#include <string.h>

int main(){
    char frase[1000];
    char cara;
    int tamanho,n;
    printf("Frase desejada:\n");
    fgets(frase,1000,stdin);
    printf("Caracter que substituira as vogais:\n");
    scanf("%c",&cara);
    tamanho=strlen(frase);
    for(int i=0;i<tamanho;i++){
        if(frase[i]=='a' || frase[i]=='e'|| frase[i]=='i'|| frase[i]=='o'|| frase[i]=='u'|| frase[i]=='A'|| frase[i]=='E'|| frase[i]=='I'|| frase[i]=='O'|| frase[i]=='U'){
            frase[i]=cara;
            n++;
        }
    }
    printf("Possui %d vogais.\n",n);
    printf("%s",frase);

    return 0;
}