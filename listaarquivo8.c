#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE * arq;
    FILE * arq2;
    char stream[10000];
    fgets(stream, 10000, stdin);
    stream[strlen(stream)-1] = '\0';
    arq = fopen(stream,"r");
    arq2 = fopen("aqui2.txt","w");
    if(arq == NULL){
        printf("Abriu nao;");
        return 0;
    }
    while(fgets(stream, 10000, arq)!=NULL){
        for(int j=0;j<strlen(stream);j++){
            if(stream[j]=='A'||stream[j]=='E'||stream[j]=='I'||stream[j]=='O'||stream[j]=='U'||stream[j]=='a'||stream[j]=='e'||stream[j]=='i'||stream[j]=='o'||stream[j]=='u'){
                stream[j]='*';
            }
        }
        fprintf(arq2,stream);
    }
    fclose(arq2);
    fclose(arq);
    return 0;
}