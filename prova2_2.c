#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    int contador = 0;
    int tamanho;
    char stream[10000];
    char palavra[10000];
    FILE * arq;

    printf("Nome do arquivo:");
    fgets(stream,10000,stdin);
    stream[strlen(stream)-1] = '\0';
    arq = fopen(stream, "r");

    if(arq==NULL){
        printf("Problema na arbetura do arquivo.");
        return 0;
    }

    printf("Palavra desejada:");
    fgets(palavra, 10000, stdin);
    palavra[strlen(palavra)-1] = '\0';
    
    tamanho = strlen(palavra);

    while(fgets(stream, 10000, arq)!=NULL){
        for(int i=0;i<strlen(stream);i++){
            if(stream[i]==palavra[0]){
                contador=0;
                if(i==0){
                    for(int j=0;j<tamanho;j++){
                        if(stream[j]==palavra[j]){
                            contador++;
                        }
                    }
                    if(contador==tamanho){
                        printf("A palavra %s esta presente no arquivo.\n", palavra);
                        return 0;
                    }
                }
                else if(stream[i-1]==' '){
                    for(int j=i;j<tamanho+i;j++){
                        if(stream[j]==palavra[contador]){
                            contador++;
                        }
                    }
                    if(contador==tamanho){
                        printf("A palavra %s esta presente no arquivo.\n", palavra);
                        return 0;
                    }
                }
            }
        }
    }
    
    printf("A palavra nao esta presente no arquivo.\n");

    return 0;
}