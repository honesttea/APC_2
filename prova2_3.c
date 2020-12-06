#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
}data;

typedef struct carro{
    int ano;
    char modelo[30];
    char marca[30];
    data * revisoes;
    int qtd_revisoes;
}carro;

void receberCarros(carro* carros, int n);

int main(){
    int n;
    int m;
    carro * carros;

    printf("O numero de carros para alocacao:");
    scanf("%d",&n);
    carros = (carro*)malloc(sizeof(carro)*n);

    receberCarros(carros, n);

    printf("Numero desejado de carros que passaram pelo tanto de revisoes:");
    scanf("%d",&m);

    for(int i=0;i<n;i++){
        if(carros[i].qtd_revisoes>=m){
            printf("O carro modelo %s da marca %s, ano %d passou por %d revisoes.\n", carros[i].modelo, carros[i].marca, carros[i].ano, carros[i].qtd_revisoes);
        }
    }
    return 0;
}

void receberCarros(carro * carros, int n){
    for(int i=0;i<n;i++){
        printf("Ano do carro %d:", i+1);
        scanf("%d", &carros[i].ano);
        printf("Modelo:");
        scanf("%s", carros[i].modelo);
        printf("Marca:");
        scanf("%s", carros[i].marca);
        printf("Quantidade de revisoes:");
        scanf("%d",&carros[i].qtd_revisoes);
        carros[i].revisoes = (data*)malloc(sizeof(data)*carros[i].qtd_revisoes);
        for(int j =0; j<carros[i].qtd_revisoes;j++){
            printf("Data da revisao %d: ", j+1);
            scanf("%d/%d/%d", &carros[i].revisoes[j].dia,&carros[i].revisoes[j].mes,&carros[i].revisoes[j].ano);
        }
    }
}