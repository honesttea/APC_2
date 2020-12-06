#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Endereco{
    char rua[100];
    char bairro[100];
    char cidade[100];
    char estado[50];
    int cep;
}Endereco;

typedef struct Cadastro{
    char nome[100];
    Endereco endereco;
    double salario;
    int indentidade;
    int cpf;
    char ec[30];
    int telefone;
    int idade;
    char sexo[30];
}Cadastro;

void preencherCadastro(Cadastro* p);

int main(){
    int maior=0;
    Cadastro pessoas[5];
    Cadastro temp;
    preencherCadastro(pessoas);

    for(int i =0; i<5;i++){
        if(pessoas[i].idade>maior){
            maior = pessoas[i].idade;
            temp = pessoas[i];
        }
    }
    printf("A pessoa com a maior idade e: %s, com %d.\n", temp.nome, temp.idade);
    printf("\n");

    for(int i=0;i<5;i++){
        if(strcmp(pessoas[i].sexo,"masculino")==0 || strcmp(pessoas[i].sexo,"Masculino")==0){
            printf("A pessoa %s e do sexo masculino.\n", pessoas[i].nome);
        }
    }
    printf("\n");
    for(int i=0;i<5;i++){
        if(pessoas[i].salario>1000){
            printf("A pessoa %s tem o salario de %.2lf.\n", pessoas[i].nome,pessoas[i].salario);
        }
    }

    printf("O numero da indentidade que deseja achar:");
    scanf("%d", &maior);

    for(int i=0;i<5;i++){
        if(pessoas[i].indentidade== maior){
            printf("Dados:\n");
            printf("Nome: %s\n", pessoas[i].nome);
            printf("Endereco:\n");
            printf("Rua: %s\n",pessoas[i].endereco.rua);
            printf("Bairro: %s\n",pessoas[i].endereco.bairro);
            printf("Cidade: %s\n",pessoas[i].endereco.cidade);
            printf("Estado: %s\n",pessoas[i].endereco.estado);
            printf("CEP: %d\n",pessoas[i].endereco.cep);
            printf("Salario: %.2lf \n",pessoas[i].salario);
            printf("Indentidade: %d\n",pessoas[i].indentidade);
            printf("CPF: %d\n", pessoas[i].cpf);
            printf("Estado Civil: %s\n",pessoas[i].ec);
            printf("Telefone: %d\n",pessoas[i].telefone);
            printf("Idade: %d\n",pessoas[i].idade);
            printf("Sexo: %s\n",pessoas[i].sexo);
        }
    }
}

void preencherCadastro(Cadastro* p){
    for(int i=0;i<5;i++){
        printf("Pessoa %d:\n",i+1);
        printf("Nome:");
        scanf("%s", p[i].nome);
        printf("\nLogradouro:");
        printf("\nRua:");
        scanf("%s", &p[i].endereco.rua);
        printf("Bairro:");
        scanf("%s",p[i].endereco.bairro);
        printf("Cidade:");
        scanf("%s",p[i].endereco.cidade);
        printf("Estado:");
        scanf("%s",p[i].endereco.estado);
        printf("CEP:");
        scanf("%d", &p[i].endereco.cep);
        printf("Salario:");
        scanf("%lf",&p[i].salario);
        printf("Indentidade:");
        scanf("%d",&p[i].indentidade);
        printf("CPF:");
        scanf("%d",&p[i].cpf);
        printf("Estado civil:");
        scanf("%s",p[i].ec);
        printf("Telefone:");
        scanf("%d",&p[i].telefone);
        printf("Idade:");
        scanf("%d",&p[i].idade);
        printf("Sexo:");
        scanf("%s",p[i].sexo);
        printf("\n\n");
    }
}
