#include <stdio.h>
#include <string.h>

int main(){
    char frase[1000],frase2[1000];
    char cara;
    int tamanho,tamanho2,n;
    printf("Frase desejada:\n");
    fgets(frase,1000,stdin);
    printf("Frase desejada:\n");
    fgets(frase2,1000,stdin);

    tamanho=strlen(frase);
    tamanho2=strlen(frase2);
    
    for(int i=0;i<tamanho;i++){
        if(frase[i]=='A' || frase[i]=='a'){
            frase[i]='*';
        }
    }

    for(int i=0;i<tamanho2;i++){
        if(frase2[i]=='A' || frase2[i]=='a'){
            frase2[i]='*';
        }
    }

    printf("Frase 1:\n");
    for(int i=tamanho-2;i>-1;i--){
        printf("%c",frase[i]);
    }
    printf("\n");
    printf("Frase 2:\n");
    for(int i=tamanho2-2;i>-1;i--){
        printf("%c",frase2[i]);
    }
    printf("\n");
    return 0;
}