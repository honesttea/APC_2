#include <stdio.h>
#include <string.h>


int funcao(){
    return 5;
}

int main(){
    char a[1000],b[1000];
    int tamanho;
    int fun;
    fgets(a,1000,stdin);
    fgets(b,1000,stdin);
    
    tamanho = strcmp(a,b);
    fun = funcao();
    /*
    se tamanho > 0
        a segunda frase vem antes da primeira

    se tamanho < 0
        já ta em ordem
    
    se tamanho == 0
        as frases são iguais

    */
    printf("%d", fun);

    
    return 0;
}