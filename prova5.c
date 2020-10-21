#include <stdio.h>

typedef struct Funcionario{
    long int matricula;
    float salario_bruto;
    int carga_horaria;
}Funcionario;

void mostrarOpcoes1(){
    printf("\n1) Inserir funcionario.");
    printf("\n2) Retirar funcionario.");
    printf("\n3) Mostar folha de pagamento.");
    printf("\n4) Sair.\n");
}

void mostrarOpcoes2(){
    printf("\n1) Listagem de todos os funcionarios e seus atributos.");
    printf("\n2) Soma de todos os salarios brutos.");
    printf("\n3) Valor medio da hora na empresa.");
    printf("\n4) Sair.\n");
}

void imprimeTodos(Funcionario*f, int qtd){
    for(int i =0;i<qtd;i++){
        printf("\nMatricula:%ld",f[i].matricula);
        printf("\nSalario: R$ %.2f",f[i].salario_bruto);
        printf("\nCarga horaria:%d",f[i].carga_horaria);
    }
}

void inserirFuncionario(Funcionario * f,int qtd){
    printf("\nMatricula do funcionario:");
    scanf("%ld", &f[qtd].matricula);
    printf("\nSalario bruto:");
    scanf("%f",&f[qtd].salario_bruto);
    printf("\nCarga Horaria:");
    scanf("%d",&f[qtd].carga_horaria);
}

void removerFuncionario(Funcionario * f,int qtd, int matricula){
    int contador=0;
    for(int i = 0;i<10;i++){
        if(matricula == f[i].matricula){
            contador++;
            for(;i<10;i++){
                f[i]=f[i+1];
            }
            break;
        }
    }
    if(contador==0){
        printf("\nPessoa nao encotrada.\n");
    }
    else{
        printf("\nPessoa retirada com sucesso.\n");
    }
}

float mediaDaHora(Funcionario*f,int qtd){
    float media;
    for(int  i = 0;i<qtd;i++){
        media = media + (f[i].salario_bruto/f[i].carga_horaria);
    }
    return media/qtd;
}

int main(void) {
    int qtd_funcionarios=0,opcao,opcao2=0,matricula;
    float soma=0, media= 0;
    Funcionario funcionarios[10];

    do{
        mostrarOpcoes1();
        scanf("%d",&opcao);
        if(opcao==1){
            if(qtd_funcionarios<10){
                inserirFuncionario(funcionarios,qtd_funcionarios);
                qtd_funcionarios++;
            }
            else{
                printf("\nLista cheia!");
            }
            
        }
        else if(opcao==2){
            printf("\nMatricula da pessoa que deseja remover:");
            scanf("%d",&matricula);
            removerFuncionario(funcionarios,qtd_funcionarios,matricula);
            qtd_funcionarios--;
        }
        else if(opcao==3){
            opcao2=0;
            while(opcao2!=4){
                mostrarOpcoes2();
                scanf("%d",&opcao2);
                if(opcao2==1){
                    imprimeTodos(funcionarios,qtd_funcionarios);
                }
                else if(opcao2==2){
                    for(int i = 0;i<qtd_funcionarios;i++){
                        soma+=funcionarios[i].salario_bruto;
                    }
                    printf("\nSoma dos salarios bruto: R$ %.2f\n",soma);
                    soma=0;
                }
                else if(opcao2==3){
                    media = mediaDaHora(funcionarios,qtd_funcionarios);
                    printf("\nA media de salario por hora na empresa eh de: R$ %.2f",media);
                }
                else if(opcao2>4 || opcao2<0){
                    printf("\nOpcao invalida, tente novamente.");
                }
                else{
                    opcao2=4;
                }

            }
        }
        else if(opcao>4 || opcao<0){
            printf("\nOpcao invalida, tente novamente.");
        }
        else{
            opcao=4;
        }
    }while(opcao!=4);

    return 0;
}