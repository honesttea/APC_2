#include <stdio.h>
#include <string.h>

int main(){
    char frase[1000],frase2[1000];
    int tamanho, temp;

    //fflush(stdin);
    fgets(frase,1000,stdin);
    tamanho = strlen(frase);
    //printf("Nova String: ");
    for(int i=0;i<tamanho;i++){
        if(frase[i]!=' '){
            frase2[i]=frase[i]+3;
        }
        else{
            frase2[i]=frase[i];
        }
    }
    printf("%s", frase2);
    return 0;
}