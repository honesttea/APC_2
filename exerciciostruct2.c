#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que permita armazenar o nome, a altura e da data de nascimento de até 10 pessoas. 
Cada pessoa deve ser representada por uma struct dentro de um vetor. 
A data de nascimento também deve ser uma struct.
O nome e a altura de cada pessoa devem ser informados pelo teclado.
A geração da data de nascimento deve ser feita aleatoriamente através da função abaixo

O programa deve, na tela de abertura, apresentar opções para:
***inserir um nome;
***listar todos os nomes e respectivas alturas;
***listar os nomes das pessoas que nasceram antes de uma certa data fornecida.
Cada uma destas opções deve ser implementada em uma função separada.
Para realizar o exercício, utilize como base o programa apresentado abaixo.
*/

typedef struct Data
{
    int dia, mes, ano;
} Data;

typedef struct Pessoa
{
    long int matricula;
    float altura;
    Data nascimento;
} Pessoa;

void CriaData(Data *D){
    D->mes = 1 + (rand() % 12);
    D->ano = 1950 + (rand() % 49);
    D->dia = 1 + (rand() % 30);
}

void ImprimeTelaDeOpcoes(){
    printf("\nDigite 1 para inserir uma pessoa;");
    printf("\nDigite 2 para listar todas as pessoas e respectivas alturas;");
    printf("\nDigite 3 para listar as matriculas das pessoas que nasceram antes de uma certa data fornecida;");
    printf("\n");
}

int EscolheOpcao(){
    int opcao;
    scanf("%d", &opcao);
    return opcao;
}

void LePessoaDeTeclado(Pessoa * p){
    printf("Insira a matricula:");
    scanf("%ld",&p->matricula);
    printf("Insira a altura:");
    scanf("%f",&p->altura);
    CriaData(&p->nascimento);
}

void AdicionaPessoa(Pessoa* povo, Pessoa p, int qntPessoa){
    povo[qntPessoa]=p;
}

void ImprimeTodasAsPessoas(Pessoa * povo, int qtdPessoas){
    for(int i = 0;i<qtdPessoas;i++){
        printf("\nAluno %d",i+1);
        printf("\nMatricula: %ld",povo[i].matricula);
        printf("\nAltura: %f", povo[i].altura);
        printf("\nData de Nascimento: %d/%d/%d",povo[i].nascimento.dia,povo[i].nascimento.mes,povo[i].nascimento.ano);
        printf("\n");
    }
}

void LeDataDeTeclado(Data * dia){
    printf("\nDia desejado:");
    scanf("%d",&dia->dia);
    printf("\nMes desejado:");
    scanf("%d",&dia->mes);
    printf("\nAno desejado:");
    scanf("%d",&dia->ano);
}

void ImprimeMaisVelhos(Pessoa *povo, int qtdPessoas, Data dia){
    for(int i=0;i< qtdPessoas;i++){
        if(povo[i].nascimento.ano<dia.ano){
            printf("\n%ld", povo[i].matricula);
        }
        else if(povo[i].nascimento.mes<dia.mes && povo[i].nascimento.ano==dia.ano){
            printf("\n%ld", povo[i].matricula);
        }
        else if(povo[i].nascimento.dia<dia.dia && povo[i].nascimento.ano==dia.ano && povo[i].nascimento.mes==dia.mes){
            printf("\n%ld", povo[i].matricula);
        }
    }
}

int main()
{
    Pessoa povo[10];
    Pessoa p;
    int opcao, qtdPessoas = 0;
    Data dia;

    ImprimeTelaDeOpcoes();
    do
    {
        opcao = EscolheOpcao();
        if (opcao == 1)
        {
            LePessoaDeTeclado(&p);
            AdicionaPessoa(povo, p, qtdPessoas);
            qtdPessoas++;
        }
        if (opcao == 2)
        {
            ImprimeTodasAsPessoas(povo, qtdPessoas);
        }
        if (opcao == 3)
        {
            LeDataDeTeclado(&dia);
            ImprimeMaisVelhos(povo, qtdPessoas, dia);
        }
    } while (opcao != 4);
}