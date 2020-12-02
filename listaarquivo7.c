#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Letras vao de 65~12
int main() {
    FILE * arq;
    char stream[10000];
    char caracter='A';
    fgets(stream, 10000, stdin);
    stream[strlen(stream)-1] = '\0';
    arq = fopen(stream,"r");
    if(arq == NULL){
        printf("Abriu nao;");
        return 0;
    }
    int contador=0;
    int contador2=0;
    for(int j=0;j<26;j++){
        contador=0;
        for(int i=0;fgets(stream,10000,arq)!=NULL;i++){
            for(int k=0;k<strlen(stream);k++){
                if(stream[k]==caracter||stream[k]==caracter+32){
                    contador++;
                }
            }
        }
        rewind(arq);
        printf("\nLetra '%c' aparece %d vezes.", caracter, contador);
        caracter++;
    }
    return 0;
}