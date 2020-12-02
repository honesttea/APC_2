#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE * arq;
    FILE * arq2;

    int i=0;

    char stream[10000];

    printf("Nome do arquivo de entrada 1:");
    fgets(stream,10000,stdin);
    stream[strlen(stream)-1] = '\0';
    arq = fopen(stream,"r");
    arq2 = fopen("aqui3.txt","w");
    
    if(arq == NULL){
        printf("\nArquivo de entrada nao abriu;");
        return 0;
    }
    if(arq2 == NULL){
        printf("\nArquivo de saida nao abriu;");
        return 0;
    }

    while(fgets(stream,10000,arq)!=NULL){
        fprintf(arq2,"%s", stream);
    }

    fprintf(arq2,"\n");
    
    fclose(arq);

    printf("Nome do arquivo de entrada 2:");
    fgets(stream,10000,stdin);
    stream[strlen(stream)-1] = '\0';

    arq = fopen(stream,"r");

    while(fgets(stream,10000,arq)!=NULL){
        fprintf(arq2,"%s", stream);
    }

    fclose(arq);
    fclose(arq2);
    return 0;
}
