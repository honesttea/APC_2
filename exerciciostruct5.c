#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um vetor com os dados de 5 carros:  
número do chassi, ano e preço.  Leia um valor p e mostre as informações de todos os carros com
preço menor que p. Repita este processo até que seja lido um valor p = 0.
*/


typedef struct Carro
{
    long int chassi;
    int ano;
    float preco;
}Carro;

void LeCarro(Carro * modelos){
    for(int i = 0;i<5;i++){
		printf("\nCarro %d",i+1);
        printf("\nInsira o chassi do carro:");
        scanf("%ld",&modelos[i].chassi);
        printf("\nInsira o ano do carro:");
        scanf("%d", &modelos[i].ano);
        printf("\nInsira o preco do carro:");
        scanf("%f",&modelos[i].preco);
    }
}

void PrintaMenor(Carro * modelos){
	float valor = 0;
	while(valor!=0){	
		printf("Insira o valor de corte:");
		scanf("%f", &valor);
		for(int i=0;i<5;i++){
			if(modelos[i].preco<valor){
				printf("\nChassi:%ld",modelos[i].chassi);
				printf("\nAno:%d",modelos[i].ano);
				printf("\nPreco:%f",modelos[i].preco);
			}
		}
	}
}

int main(){
    Carro modelos[5];
    float valor=0;
    LeCarro(modelos);
    PrintaMenor(modelos);
    return 0;
}