#include <stdio.h>
#include <string.h>

int main(){
    char numeros[1000];
    int tamanho;
    fgets(numeros, 1000, stdin);
    tamanho = strlen(numeros);
    for(int i=0;i<tamanho;i++){
        if(numeros[i]=='0'){
            numeros[i]='1';
        }
    }
    printf("%s", numeros);
    return 0;
}