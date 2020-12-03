#include <stdio.h>
#include <string.h>

int main(){
    char frase[1000];
    int tamanho;
    fgets(frase,1000,stdin);
    tamanho=strlen(frase);
    for(int i=0;i<tamanho;i++){
        if(frase[i]=='a' || frase[i]=='e'|| frase[i]=='i'|| frase[i]=='o'|| frase[i]=='u'|| frase[i]=='A'|| frase[i]=='E'|| frase[i]=='I'|| frase[i]=='O'|| frase[i]=='U'){
            for(int j=i;j<tamanho;j++){
                frase[j]=frase[j+1];
                i--;
            }
        }
    }
    printf("%s",frase);
    return 0;
}