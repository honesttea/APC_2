#include <stdio.h>

typedef struct coordenada{
    int x,y;
}coordenada;

void preencher_coordenada(coordenada * x,int * i){
    printf("Coordenada X(%d):",*i);
    scanf("%d",&x->x);
    printf("Coordenada Y(%d):",*i);
    scanf("%d",&x->y);
}

void mostrar_quadrante(coordenada x){
    if(x.x==0 && x.y!=0){
        printf("Coordenada sobre o eixo Y\n");
    }
    else if(x.y==0 && x.x!=0){
        printf("Coordenada sobre o eixo X\n");
    }
    else if(x.x>0 && x.y>0){
        printf("Coordenada no primeiro quadrante\n");
    }
    else if(x.x>0 && x.y<0){
        printf("Coordenada no quarto quadrante\n");
    }
    else if(x.x<0 && x.y>0){
        printf("Coordenada no segundo quadrante\n");
    }
    else if(x.x<0 && x.y<0){
        printf("Coordenada no terceiro quadrante\n");
    }
    else if(x.x==0 && x.y==0){
        printf("Coordenada no ponto neutro\n");
    }
}

int main(void) {
    int j=1;
    coordenada coordenadas[10];
    for(int i=0;i<10;i++){
        preencher_coordenada(&coordenadas[i],&j);
        mostrar_quadrante(coordenadas[i]);
        j++;
    }   
}