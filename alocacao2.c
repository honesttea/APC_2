#include <stdio.h>
#include <stdlib.h>

int *interseccao(int *x1, int *x2, int n1, int n2, int * qtd){
    int tamanho=0;
    int maior=0;
    int* x3;
    int a;

    //achando quantos termos em comum tem x1 e x2
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(x1[i]==x2[j]){
                tamanho++;
            }
        }
    }

    //achando a quantidade
    *qtd = tamanho;

    //alocando x3
    x3=(int*)malloc(sizeof(int)*(*qtd));

    //preenchendo com zero o vetor
    for(int i=0;i<*qtd;i++){
        x3[i] = 0;
    }

    int aux = 0;
    //adicionando os termos com comum de x1 e x2
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(x1[i]==x2[j]){
                x3[aux]=x1[i];
                aux++;
            }
        }
    }
    
    //ordenando o vetor em ordem crescente
    int c,c1, temp;

    for(c=0;c<*qtd-1;c++){
        for(c1=0; c1<*qtd-1;c1++){
            if(x3[c1]>x3[c1+1]){
                temp=x3[c1];
                x3[c1]=x3[c1+1];
                x3[c1+1]=temp;
            }
        }
    }

    return  x3;
}

int main(){
    int * x1;
    int * x2;
    int n1,n2;
    int qtd=0;
    int * x3;
    int tamanho;

    //recebendo variaveis de x1
    printf("Quantidade de parametros no vetor x1:\n");
    scanf("%d", &n1);
    x1=(int*)malloc(sizeof(int)*n1);
    printf("Digite os parametros:\n");
    for(int i=0;i<n1;i++){
        scanf("%d",&x1[i]);
    }

    //recebendo variaveis de x2
    printf("Quantidade de parametros no vetor x2:\n");
    scanf("%d", &n2);
    x2=(int*)malloc(sizeof(int)*n2);
    printf("Digite os parametros:\n");
    for(int i=0;i<n2;i++){
        scanf("%d",&x2[i]);
    }

    //chamada da funcao e recebendo um endereco
    x3 = interseccao(x1,x2,n1,n2,&qtd);

    printf("x1 = {");
    for(int i=0;i<n1;i++){
        printf("%d",x1[i]);
        if(i+1<n1){
            printf(",");
        }
    }
    printf("} intersceccao com ");

    printf("x2 = {");
    for(int i=0;i<n2;i++){
        printf("%d",x2[i]);
        if(i+1<n2){
            printf(",");
        }
    }
    printf("} resulta em: \n");

    //imprimindo o resultado
    printf("x3 = {");
    for(int i=0;i<qtd;i++){
        printf("%d",x3[i]);
        if(i+1<qtd){
            printf(",");
        }
    }
    printf("}\n");
    
    return 0;
}