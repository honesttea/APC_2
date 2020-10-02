#include <stdio.h>

typedef struct Endereco{
    char rua[100], bairro[100], cidade[100],estado[30];
    int cep;
}Endereco;

typedef struct Cadastro{
    char nome[100];
    char civil[30];
    Endereco endereco;
    float salario;
    int indentidade, cpf, telefone, idade, sexo;
}Cadastro;

void imprimeOpcoes(){
    printf("#########################################################################\n");
    printf("                       Escolha uma opcao abaixo\n");
    printf("#########################################################################\n");
    printf("1)Inserir pessoa.\n");
    printf("2)Buscar pessoa com maior idade.\n");
    printf("4)Buscar pessoas do sexo masculino.\n");
    printf("3)Buscar pessoa com salario maior que R$1000,00.\n");
    printf("5)Buscar pessoa pela indentidade.\n");
    printf("0)Encerra o codigo");
}

void inserirPessoa(Cadastro * cadastro,int n){
    printf("\nInsira o nome:");
    fgets(cadastro[n].nome,100,stdin);
    printf("\nInsira o bairro:");
    fgets(cadastro[n].endereco.bairro,30,stdin);
    printf("\nInsira a rua:");
    fgets(cadastro[n].endereco.rua,40,stdin);
    printf("\nInsira o CEP:");
    scanf("%d",&cadastro[n].endereco.cep);
    printf("\nInsira a Cidade:");
    scanf("%s",cadastro[n].endereco.cidade);
    printf("\nInsira o Estado(sigla):");
    scanf("%s",cadastro[n].endereco.estado);
    printf("\nInsira o telefone(NNNNNNNNN)");
    scanf("%d",&cadastro[n].telefone);
    printf("\nInsira o salario");
    scanf("%f", &cadastro[n].salario);
    printf("\nInsira a indentidade:");
    scanf("%d",&cadastro[n].indentidade);
    printf("\nInsira o estado civil:");
    fgets(cadastro[n].civil,30,stdin);
    printf("\nInsira a idade");
    scanf("%d",&cadastro[n].idade);
    printf("\nInsira o sexo(1-M/2-F)");
    scanf("%d",&cadastro[n].sexo);
}

void imprimePessoa(Cadastro cadastro){
    printf("\nNome:%s",cadastro.nome);
    printf("\nEndereco:\n Bairro: %s\n",cadastro.endereco.bairro);
    printf("\nRua: %s",cadastro.endereco.rua);
    printf("\nEstado: %s",cadastro.endereco.estado);
    printf("\nCidade: %s",cadastro.endereco.cidade);
    printf("\nCep: %d",cadastro.endereco.cep);
    printf("\nSalario: %.2f",cadastro.salario);
    printf("\nIdade: %d",cadastro.idade);
    printf("\nCPF: %d",cadastro.cpf);
    printf("\nEstado Civil: %s",cadastro.civil);
    printf("\nTelefone:%d",cadastro.telefone);
    printf("\nIndentidade:%d",cadastro.indentidade);
    if(cadastro.sexo==1){
        printf("\nSexo: Masculino");
    }
    else{
        printf("\nSexo: Feminino");
    }
}

void maiorIdade(Cadastro * cadastro){
    Cadastro temp;
    temp.idade = 0;
    for(int i=0;i<5;i++){
        if(cadastro[i].idade>temp.idade){
            temp = cadastro[i];
        }
    }
    imprimePessoa(temp);
}

int main(void) {
    int opcao = 0,n=0, temp=0;
    Cadastro cadastro[5];
    do{
        imprimeOpcoes();
	scanf("%d",&opcao);
        if(opcao==1){
            if(n<5){
                inserirPessoa(cadastro,n);
                n++;
            }
            else{
                printf("\nCadastro cheio.");
            }
        }
        else if(opcao==2){
            maiorIdade(cadastro);
        }
        else if(opcao==3){
            for(int i = 0;i<5;i++){
                if(cadastro[i].sexo==1){
                    imprimePessoa(cadastro[i]);
                }
            }
        }
        else if(opcao==4){
            for(int i = 0;i<5;i++){
                if(cadastro[i].salario>1000){
                    imprimePessoa(cadastro[i]);
                }
            }
        }
        else if(opcao==5){
            printf("Insira a indentidade que deseja buscar:");
            scanf("%d",&temp);
            for(int i = 0;i<5;i++){
                if(cadastro[i].indentidade==temp){
                    imprimePessoa(cadastro[i]);
                }
            }
        }
        else if(opcao>5 || opcao<0){
            printf("Opcao nao eh valida.");
        }
    }while(opcao!=0);
}