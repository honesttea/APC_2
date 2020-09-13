#include <stdio.h>
#include <stdlib.h>

typedef struct Data
{
    int dia,mes,ano;
}Data;


typedef struct Funcionario
{
    long int cpf,
    matricula;
    int sexo,
    setor,
    idade;
    float salario;
    Data nascimento;

}Funcionario;

void PegaDados(Funcionario * funcionario){
    printf("\nInsira a matricula:");
    scanf("%ld",&funcionario->matricula);
    printf("\nInsira a idade:");
    scanf("%d",&funcionario->idade);
    printf("\nInsira o sexo (1 - M / 2 - F):");
    scanf("%d",&funcionario->sexo);
    printf("\nInsira o CPF:");
    scanf("%ld",&funcionario->cpf);
    printf("\nInsira a data de nascimento:");
    scanf("%d %d %d",&funcionario->nascimento.dia,&funcionario->nascimento.mes,&funcionario->nascimento.ano);
    printf("Insira o codigo do setor onde trabalha:");
    scanf("%d",&funcionario->setor);
    printf("\nInsira o salario:");
    scanf("%f",&funcionario->salario);
}

void PrintaDados(Funcionario * funcionario){
    printf("\nMatricula:%ld",funcionario->matricula);
    printf("\nIdade:%d",funcionario->idade);
    if(funcionario->sexo==1){
        printf("\nSexo Masculino");
    }
    else{
        printf("\nSexo Feminino");
    }
    printf("\nCPF:%ld",funcionario->cpf);
    printf("\nData de Nascimento: %d/%d/%d",funcionario->nascimento.dia,funcionario->nascimento.mes,funcionario->nascimento.ano);
    printf("\nSetor:%d",funcionario->setor);
    printf("\nSalario:%f",funcionario->salario);
}

int main(){
    Funcionario funcionario;
    PegaDados(&funcionario);
    PrintaDados(&funcionario);
}