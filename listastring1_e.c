#include <stdio.h>
#include <string.h>

int main(){
    char frase[1000];
    char cara;
    int tamanho,n;
    printf("Frase desejada:\n");
    fgets(frase,1000,stdin);
    tamanho=strlen(frase);
    for(int i=0;i<tamanho;i++){
        if(frase[i]==' '){
            n++;
        }
    }
    printf("A frase possui %d espacos em branco.\n",n);
    return 0;
}