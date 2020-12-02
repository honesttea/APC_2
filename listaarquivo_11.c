#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Cidade{
    int pop;
    char nome[1000];
}Cidade;

void sortMaroto(Cidade * cidade, int tamanho);

int main() {
    FILE * arq;
    FILE * arq2;
    Cidade cidades[100];
    int i=0;

    char stream[10000];

    printf("Nome do arquivo de entrada:");
    fgets(stream,10000,stdin);
    stream[strlen(stream)-1] = '\0';
    arq = fopen(stream,"r");

    printf("Nome do arquivo de saida:");
    fgets(stream,10000,stdin);
    stream[strlen(stream)-1] = '\0';
    arq2 = fopen(stream,"w");

    if(arq == NULL){
        printf("\nArquivo de entrada nao abriu;");
        return 0;
    }
    if(arq2 == NULL){
        printf("\nArquivo de saida nao abriu;");
        return 0;
    }

    for(i=0;feof(arq)==0;i++){
        fscanf(arq,"%s %d", cidades[i].nome, &cidades[i].pop);
    }

    sortMaroto(cidades, i);

    for(int j=0; j<i;j++){
        fprintf(arq2,"%s %d\n", cidades[j].nome, cidades[j].pop);
    }
    
    fclose(arq);
    fclose(arq2);
    return 0;
}

void sortMaroto(Cidade * cidade, int tamanho){
    for(int i=0; i< tamanho/2; i++){
        for(int j=0;j<tamanho;j++){
            if(cidade[j].pop<cidade[j+1].pop){
                Cidade temp = cidade[j]; 
                cidade[j] = cidade[j+1]; 
                cidade[j+1] = temp; 
            }
        }
    }
}
