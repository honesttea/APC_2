#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char stream[10000];
    char stream2[10000];
    FILE* arq1;
    FILE* arq2;
    int contador=0;
    printf("Nome do primeiro arquivo:");
    fgets(stream,10000,stdin);
    stream[strlen(stream)-1] = '\0';
    arq1 = fopen(stream, "r");

    printf("Nome do segundo arquivo:");
    fgets(stream,10000,stdin);
    stream[strlen(stream)-1] = '\0';
    arq2 = fopen(stream, "r");
    
    if(arq1==NULL){
        printf("Falha na abertura do arquivo 1");
        return 0;
    }
    
    if(arq2==NULL){
        printf("Falha na abertura do arquivo 2");
        return 0;
    }
    
    while(fgets(stream, 10000, arq1)!=NULL){
        fgets(stream2, 10000, arq2);
        if(strcmp(stream,stream2)!=0){
            contador++;
        }
    }

    if(contador>0){
        printf("O conteudo dos dois arquivos sao diferentes.\n");
    }
    else{
        printf("O conteudo dos arquivos sao iguais.\n");
    }
    return 0;
}
