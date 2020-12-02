#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10000

int main() {
    FILE * arq;
    char stream[MAX];
    char caracter;
    printf("Nome do arquivo:");
    fgets(stream, MAX, stdin);
    printf("Caracter desejado:");
    scanf("%c",&caracter);
    stream[strlen(stream)-1] = '\0';
    arq = fopen(stream,"r");
    if(arq == NULL){
        printf("Abriu nao;");
        return 0;
    }
    int contador=0;
    for(int i=0;fgets(stream,MAX,arq)!=NULL;i++){
        for(int j=0;j<strlen(stream);j++){
            if(stream[j]==caracter){
                contador++;
            }
        }
    }
    printf("No arquivo tem %d caracteres '%c'.", contador, caracter);
    return 0;
}