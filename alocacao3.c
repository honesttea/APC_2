#include <stdio.h>
#include <stdlib.h>

void recebimento(int *n, int qtd){
    printf("Escreva os elementos do vetor de tamanho %d:\n",qtd);
    for(int i= 0;i<qtd;i++){
        scanf("%d", &n[i]);
    }
}

int main(){
    int qtd;
    int *n;
    printf("Escreva o numero de elementos desejado no vetor:\n");
    scanf("%d",&qtd);
    n = (int*)malloc(sizeof(int)*qtd);
    recebimento(n,qtd);
    for(int i= 0;i<qtd;i++){
        printf("%d ",n[i]);
    }
    printf("\n");
    return 0;
}
