#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE * arq;
    char entrada[10000];
    char entrada2[10000];
    char entrada3[10000];
    printf("Nome do arquivo:");
    fgets(entrada, 10000, stdin);
    printf("Palavra desejada:");
    fgets(entrada3, 10000, stdin);
    entrada[strlen(entrada)-1]='\0';
    entrada3[strlen(entrada3)-1]='\0';
    if(entrada[strlen(entrada)-4]!='.'){
        strcat(entrada,".txt");
    }
    int contador = 0;
    int tamanho = strlen(entrada3);
    arq = fopen(entrada,"r");
    if(arq == NULL){
        printf("Faiou");
        return 0;
    }
    while(fgets(entrada2,10000,arq)!=NULL){
        int tamanho2 = strlen(entrada2);
        for(int i=0;i<tamanho2;i++){
            if(entrada3[0]==entrada2[i]){
                if(i==0){
                    int c=0;
                    for(int j=i;j<tamanho;j++){
                        if(entrada2[j]==entrada3[c]){
                            c++;
                        }
                    }
                    if(c==tamanho){
                        contador++;
                    }
                }
                else if(entrada2[i-1]==' '){
                    int c=0;
                    for(int j=i;j<tamanho+i;j++){
                        if(entrada2[j]==entrada3[c]){
                            c++;
                        }
                    }
                    if(c==tamanho){
                        contador++;
                    }
                }
            }
        }
    }
    printf("A palavra %s aparece %d vezes no arquivo %s.\n", entrada3,contador,entrada);
}