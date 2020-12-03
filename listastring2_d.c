#include <stdio.h>
#include <string.h>

int main(){
    char frase[1000];
    char entrada;
    int i,tamanho, contador=0;

    printf("Frase:\n");
    fgets(frase,1000,stdin);
    printf("Caracter:\n");
    scanf("%c",&entrada);
    printf("Numero do indice:\n");
    scanf("%d",&i);
    tamanho = strlen(frase);
    for(;i<tamanho;i++){
        if(frase[i]==entrada){
            printf("O caracter '%c' encotra-se no indice %d da frase.\n",entrada,i);
            return 0;
        }
    }
    printf("Nao foi encontrado o caracter na frase.");
    return 0;
}