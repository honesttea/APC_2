#include <stdio.h>

typedef struct coordenada{
    int x,y;
}coordenada;

void ocorrencia(coordenada*c1,coordenada*c2){
    int contador1=0,contador2=0,i;
    //Quem passa mais por X
    for(i=0;i<3;i++){
        if(c1[i].y==0){
            contador1++;
        }
        if(c2[i].y==0){
            contador2++;
        }
    }
    if(contador1 ==0&& contador2==0){
        printf("\nNenhuma coordenada nas duas listas passam pelo eixo X.");
    }
    else if(contador1==contador2){
        printf("\nAs duas listas possuem a mesma quantidade de ocorrencias sobre o eixo x.");
    }
    else if(contador1<contador2){
        printf("\nA lista 2 possui mais ocorrencias sobre o eixo X que a lista 1;");
    }
    else{
        printf("\nA lista 1 possui mais ocorrencias sobre o eixo X que a lista 2;");
    }

    contador1=0;
    contador2=0;

    //Quem passa mais por Y
    for(i=0;i<3;i++){
        if(c1[i].x==0){
            contador1++;
        }
        if(c2[i].x==0){
            contador2++;
        }
    }
    if(contador1 ==0&& contador2==0){
        printf("\nNenhuma coordenada nas duas listas passam pelo eixo Y.");
    }
    else if(contador1==contador2){
        printf("\nAs duas listas possuem a mesma quantidade de ocorrencias sobre o eixo Y.");
    }
    else if(contador1<contador2){
        printf("\nA lista 2 possui mais ocorrencias sobre o eixo Y que a lista 1;");
    }
    else{
        printf("\nA lista 1 possui mais ocorrencias sobre o eixo Y que a lista 2;");
    }

    contador1=0;
    contador2=0;
    //Quadrante 1
    for(i=0;i<3;i++){
        if(c1[i].x>0 && c1[i].y>0){
            contador1++;
        }
        if(c2[i].x>0 && c2[i].y>0){
            contador2++;
        }
    }
    if(contador1 ==0&& contador2==0){
        printf("\nNenhuma coordenada nas duas listas passam pelo primeiro quadrante.");
    }
    else if(contador1==contador2){
        printf("\nAs duas listas possuem a mesma quantidade de ocorrencias no primeiro quadrante.");
    }
    else if(contador1<contador2){
        printf("\nA lista 2 possui mais ocorrencias no primeiro quadrante que a lista 1");
    }
    else{
        printf("\nA lista 1 possui mais ocorrencias no primeiro quadrante que a lista 2");
    }

    contador1=0;
    contador2=0;

    //Quadrante 2
    for(i=0;i<3;i++){
        if(c1[i].x<0 && c1[i].y>0){
            contador1++;
        }
        if(c2[i].x<0 && c2[i].y>0){
            contador2++;
        }
    }
    if(contador1 ==0&& contador2==0){
        printf("\nNenhuma coordenada nas duas listas passam pelo segundo quadrante.");
    }
    else if(contador1==contador2){
        printf("\nAs duas listas possuem a mesma quantidade de ocorrencias no segundo quadrante.");
    }
    else if(contador1<contador2){
        printf("\nA lista 2 possui mais ocorrencias no segundo quadrante que a lista 1");
    }
    else{
        printf("\nA lista 1 possui mais ocorrencias no segundo quadrante que a lista 2");
    }

    contador1=0;
    contador2=0;

    //Quadrante 3
    for(i=0;i<3;i++){
        if(c1[i].x<0 && c1[i].y<0){
            contador1++;
        }
        if(c2[i].x<0 && c2[i].y<0){
            contador2++;
        }
    }
    if(contador1 ==0&& contador2==0){
        printf("\nNenhuma coordenada nas duas listas passam pelo terceiro quadrante.");
    }
    else if(contador1==contador2){
        printf("\nAs duas listas possuem a mesma quantidade de ocorrencias no terceiro quadrante.");
    }
    else if(contador1<contador2){
        printf("\nA lista 2 possui mais ocorrencias no terceiro quadrante que a lista 1");
    }
    else{
        printf("\nA lista 1 possui mais ocorrencias no terceiro quadrante que a lista 2");
    }

    contador1=0;
    contador2=0;

    //Quadrante 4
    for(i=0;i<3;i++){
        if(c1[i].x>0 && c1[i].y<0){
            contador1++;
        }
        if(c2[i].x>0 && c2[i].y<0){
            contador2++;
        }
    }
    if(contador1 ==0&& contador2==0){
        printf("\nNenhuma coordenada nas duas listas passam pelo quarto quadrante.");
    }
    else if(contador1==contador2){
        printf("\nAs duas listas possuem a mesma quantidade de ocorrencias no quarto quadrante.");
    }
    else if(contador1<contador2){
        printf("\nA lista 2 possui mais ocorrencias no quarto quadrante que a lista 1");
    }
    else{
        printf("\nA lista 1 possui mais ocorrencias no quarto quadrante que a lista 2");
    }
}

void recebeVariaveis(coordenada*c, int n){
    printf("Lista %d",n);
    for(int i = 0;i<3;i++){
        printf("\nCoordenada X:");
        scanf("%d",&c[i].x);
        printf("\nCoordenada Y:");
        scanf("%d",&c[i].y);
    }
}

int main(void) {
    int n=1;
    coordenada lista1_coordenadas[3];
    coordenada lista2_coordenadas[3];
    recebeVariaveis(lista1_coordenadas,n);
    n++;
    recebeVariaveis(lista2_coordenadas,n);
    ocorrencia(lista1_coordenadas,lista2_coordenadas);
    return 0;
}
