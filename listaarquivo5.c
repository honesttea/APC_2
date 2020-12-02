#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    FILE * arq;
    char stream[10000];
    fgets(stream, 10000, stdin);
    stream[strlen(stream)-1] = '\0';
    arq = fopen(stream,"r");
    if(arq == NULL){
        printf("Abriu nao;");
        return 0;
    }
    int contador=0;
    int contador2=0;
    for(int i=0;fgets(stream,10000,arq)!=NULL;i++){
        for(int j=0;j<strlen(stream);j++){
            if(stream[j]=='a'||stream[j]=='e'||stream[j]=='i'||stream[j]=='o'||stream[j]=='u'||stream[j]=='A'||stream[j]=='E'||stream[j]=='I'||stream[j]=='O'||stream[j]=='U'){
                contador++;
            }
            else if(stream[j]!='\n'){
                contador2++;
            }
        }
    }
    printf("No arquivo tem %d vogais e %d consoantes.", contador, contador2);
    return 0;
}