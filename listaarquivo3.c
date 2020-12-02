#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    FILE * arq;
    char stream[10000];
    int i=0;
    fgets(stream, 10000, stdin);
    stream[strlen(stream)-1] = '\0';
    arq = fopen(stream,"r");
    if(arq == NULL){
        printf("Abriu nao;");
        return 0;
    }
    for(i=0;fgets(stream,10000,arq)!=NULL;i++);
    printf("O arquivo tem %d linhas",i);
    return 0;
}