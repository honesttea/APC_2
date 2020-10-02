#include <stdio.h>
#include <string.h>

typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct Endereco{
    char rua[40];
    int cep;
    int numero;
    char bairro[30];
    char complemento[30];

}Endereco;

typedef struct Telefone{
    int DDD;
    int numero;
}Telefone;

typedef struct Pessoa{
    char nome[100];
    char email[100];
    Endereco endereco;
    Data data;
    Telefone telefone;
    char observacao[150];
}Pessoa;

void inserirPessoa(Pessoa * agenda, int n){
    printf("\nInsira o nome:");
    scanf("%s",agenda->nome);
    printf("\nInsira o email:");
    scanf("%s",agenda->email);
    printf("\nInsira o telefone(DDD/NNNNNNNNN)");
    scanf("%d %d",&agenda->telefone.DDD,&agenda->telefone.numero);
    printf("\nInsira o bairro:");
    scanf("%s",agenda->endereco.bairro);
    printf("\nInsira a rua:");
    scanf("%s",agenda->endereco.rua);
    printf("\ninsira o numero da residencia:");
    scanf("%d",&agenda->endereco.numero);
    printf("\nInsira o CEP:");
    scanf("%d",&agenda->endereco.cep);
    printf("\nInsira o complemento:");
    scanf("%s",agenda->endereco.complemento);
    printf("\nInsira a data de nascimento(DD/MM/AAAA):");
    scanf("%d/%d/%d",&agenda->data.dia,&agenda->data.mes,&agenda->data.ano);
    printf("\nInsira observacao:");
    scanf("%s",agenda->observacao);
}

void ordemAlfabetica(Pessoa * agenda,Pessoa temp,int n){    
    for(int i=0;i<100;i++){
        if(strcmp(temp.nome,agenda[i].nome)<0){
            for(int j=n;j>i;j--){
                agenda[j+1]=agenda[j];
            }
            agenda[i]=temp;
            break;
        }
    }
}

void imprimeDados(Pessoa * agenda, int n){
    printf("\nNome:%s",agenda[n].nome);
    printf("\nEmail:%s",agenda[n].email);
    printf("\nEndereco:\nBairro: %s",agenda[n].endereco.bairro);
    printf("\nRua: %s",agenda[n].endereco.rua);
    printf("\nCep: %d",agenda[n].endereco.cep);
    printf("\nNumero da residencia: %d", agenda[n].endereco.numero);
    printf("\nComplemento: %s", agenda[n].endereco.complemento);
    printf("\nData de aniversario: %d/%d/%d",agenda[n].data.dia,agenda[n].data.mes,agenda[n].data.ano);
    printf("\nTelefone:(%d) %d\n",agenda[n].telefone.DDD,agenda[n].telefone.numero);
}

void imprimeDadosParcial(Pessoa agenda){
    printf("\nNome: %s",agenda.nome);
    printf("\nTelefone: (%d) %d",agenda.telefone.DDD,agenda.telefone.numero);
    printf("\nEmail: %s\n",agenda.email);
}

void buscarMes(Pessoa * agenda,int n, int mes){
    int j=0;
    for(int i = 0;i<100;i++){
        if(agenda[i].data.mes == mes){
            imprimeDados(agenda, i);
            j++;
        }
    }
    if(j==0){
        printf("Nao ha pessoas com essa data.\n");
    }
}

void buscarMesAno(Pessoa * agenda,int n, int mes,int ano){
    int j=0;
    for(int i = 0;i<100;i++){
        if(agenda[i].data.mes == mes && agenda[i].data.ano == ano){
            imprimeDados(agenda, i);
            j++;
        }
    }
    if(j==0){
        printf("Nao ha pessoas com essa data.\n");
    }
}


void imprimeOpcoes(){
    printf("#########################################################################\n");
    printf("                       Escolha uma opcao abaixo\n");
    printf("#########################################################################\n");
    printf("1)Inserir pessoa.\n");
    printf("2)Buscar pessoa por mes de aniversario.\n");
    printf("3)Buscar pessoa por dia e mes de aniversario.\n");
    printf("4)Imprime a agenda somente Nome, telefone e email.\n");
    printf("5)Imprime a agenda completa.\n");
    printf("6)Apagar contato.\n");
    printf("0)Encerra o codigo\n");
}

int main(void) {
    int opcao=0, n=0, mes=0, ano=0,nada=1;
    char nome[100];
    Pessoa agenda[101];
    Pessoa temp;
    for(int i=0;i<100;i++){
        agenda[i].nome[0]='z';
    }
    do{
        imprimeOpcoes();
        scanf("%d",&opcao);
        if(opcao==1){
            if(n<100){
                inserirPessoa(&temp,n);
                n++;
                for(int i=0;i<100;i++){
                    if(strcmp(temp.nome,agenda[i].nome)<0){
                        for(int j=100;j>=i;j--){
                            agenda[j+1]=agenda[j];
                        }
                        agenda[i]=temp;
                        break;
                    }
                }
                
            }
            else{
                printf("Agenda Cheia.\n");
            }
        }
        else if(opcao==2){
            printf("\nInsira o Mes que deseja buscar:");
            scanf("%d",&mes);
            buscarMes(agenda, n, mes);
        }
        else if(opcao==3){
            printf("\nInsira o Mes e o ano(MM/AAAA) que deseja buscar:");
            scanf("%d/%d",&mes,&ano);
            buscarMesAno(agenda, n, mes,ano);
        }
        else if(opcao==4){
            for(int i=0;i<n;i++){
                imprimeDadosParcial(agenda[i]);
            }
        }
        else if(opcao == 5){
            for(int i= 0;i<(n);i++){
                imprimeDados(agenda, i);
            }
        }
        else if(opcao==6){
            printf("Nome da pessoa que deseja apagar");
            scanf("%s",nome);
            for(int i=0;i<100;i++){
                    if(strcmp(nome,agenda[i].nome)==0){
                        for(int j=i;j<100;j++){
                            agenda[j]=agenda[j+1];
                        }
                        n--;
                        break;
                    }
                }
        }
        else if(opcao>6 || opcao<0){
            printf("Opcao invalida\n");
        }
    }while(opcao!=0);

}