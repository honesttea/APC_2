#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE * loucura;
    FILE * loucura2;
    
    int t,i;
    char nomeDoArquivo1[1000];
    char nomeDoArquivo2[1000];
    char streamzinha[1000];
    printf("\nNome do Arquivo 1:");
    fgets(nomeDoArquivo1, 1000, stdin);
    printf("\nNome do Arquivo 2:");
    fgets(nomeDoArquivo2, 1000, stdin);

    nomeDoArquivo1[strlen(nomeDoArquivo1)-1]='\0';
    nomeDoArquivo2[strlen(nomeDoArquivo2)-1]='\0';

    strcat(nomeDoArquivo1,".txt");
    strcat(nomeDoArquivo2,".txt");

    loucura = fopen(nomeDoArquivo1,"r");
    loucura2 = fopen(nomeDoArquivo2,"r");

    for(i=0;fgets(streamzinha,1000,loucura)!=NULL;i++);
    for(t=0;fgets(streamzinha,1000,loucura2)!=NULL;t++);

    if(t>i)
        printf("%s tem mais linhas que %s", nomeDoArquivo2, nomeDoArquivo1);
    else if(i>t)
        printf("%s tem mais linhas que %s", nomeDoArquivo1, nomeDoArquivo2);
    else
        printf("%s tem a mesma quantidade de linhas que %s", nomeDoArquivo1, nomeDoArquivo2);

    
    fclose(loucura);
    fclose(loucura2);
    return 0;
}