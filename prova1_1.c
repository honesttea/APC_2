#include <stdio.h>

typedef struct funcionario{
    long int matricula;
    float salario_bruto;
    int carga_horaria;
}funcionario;

void recebeDados(funcionario * f){
    printf("\nInsira a matricula:");
    scanf("%ld",&f->matricula);
    printf("\nInsira o salário:");
    scanf("%f",&f->salario_bruto);
    printf("\nInsira a carga carga horaria:");
    scanf("%d",&f->carga_horaria);
}

int main(void) {
    funcionario Jack;
    recebeDados(&Jack);
    printf("\nA matricula de Jack: %ld",Jack.matricula);
    printf("\nO salario de Jack: %.2f",Jack.salario_bruto);
    printf("\nA carga horaria de Jack: %d\n",Jack.carga_horaria);
    return 0;
}
