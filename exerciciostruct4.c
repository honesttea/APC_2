#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que leia os dados de 10 alunos (matricula e Media Final), 
armazenando em um vetor de structs. Uma vez lidos os dados, divida estes dados em 2 novos vetores,
o vetor dos aprovados e o vetor dos reprovados, considerando a média mínima para aaprovação 
como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos dados do vetor de reprovados.
*/

typedef struct Aluno
{
    long int matricula;
    float media;
}Aluno;

typedef struct Situacao
{
    int aprovado,reprovado;
}Situacao;

void RecebeAluno(Aluno * pessoa){
    printf("\nInsira a matricula:");
    scanf("%ld", &pessoa->matricula);
    printf("Insira a media final:");
    scanf("%f", &pessoa->media);
}

void SalvaAluno(Aluno * turma, Aluno pessoa,int numero){
    turma[numero]=pessoa;
}

void FoiAprovado(Aluno* aluno, Aluno* reprovado, Aluno* aprovado, Situacao* sit){
    int i=0, j=0, k=0;
    for(i=0;i<10;i++){
        if(aluno[i].media<5){
            reprovado[sit->reprovado]=aluno[i];
            sit->reprovado++;
        }
        else{
            aprovado[sit->aprovado]=aluno[i];
            sit->aprovado++;
        }
    }
}

void ImprimeAGalera(Aluno*aprovado,Aluno*reprovado, Situacao sit){
    for(int i = 0;i<sit.aprovado;i++){
        printf("\nMatricula:%ld",aprovado[i].matricula);
        printf("\nMedia:%1f",aprovado[i].media);
        printf("\nSituacao: Aprovado");
        printf("\n");
    }
    for(int i = 0;i<sit.reprovado;i++){
        printf("\nMatricula:%ld",reprovado[i].matricula);
        printf("\nMedia:%f",reprovado[i].media);
        printf("\nSituacao: Reprovado");
        printf("\n");
    }
}

int main(){
    Aluno turma[10];
    Aluno pessoa;
    Aluno reprovado[10], aprovado[10];
    Situacao sit;
    sit.aprovado=0; sit.reprovado=0;
    int numero;
    for(int i=0;i<10;i++){
        RecebeAluno(&pessoa);
        SalvaAluno(turma,pessoa,i);
    }
    FoiAprovado(turma,reprovado,aprovado,&sit);
    ImprimeAGalera(aprovado, reprovado,sit);
}