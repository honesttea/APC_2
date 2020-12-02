#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    FILE * arq;
    FILE * arq2;
    
    char stream[10000];

    printf("Nome do arquivo de entrada 1:");
    fgets(stream,10000,stdin);
    stream[strlen(stream)-1] = '\0';

    arq = fopen(stream,"r");

    if(arq == NULL){
        printf("Abriu nao;");
        return 0;
    }

    printf("Nome do arquivo de entrada 1:");
    fgets(stream,10000,stdin);
    stream[strlen(stream)-1] = '\0';

    arq2 = fopen(stream,"w");

    if(arq2 == NULL){
        printf("Abriu nao;");
        return 0;
    }
    
    while(fgets(stream,10000, arq)!=NULL){
        for(int i = 0;i<strlen(stream);i++){
            if(stream[i]>=97&&stream[i]<=122){
                //stream[i]-=32;
                stream[i] = toupper(stream[i]);
            }
        }
        fprintf(arq2, "%s", stream);
    }
    
    fclose(arq);
    fclose(arq2);

    return 0;
}