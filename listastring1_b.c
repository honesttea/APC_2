#include <stdio.h>
#include <string.h>

int main(){
    char palavra[1000], palavra2[1000];
    int tamanho, j;

    fgets(palavra,1000,stdin);
    tamanho = strlen(palavra)-2;

    j=tamanho;

    for(int i=0;i<tamanho+1;i++){
        palavra2[i]=palavra[j];
        j--;
    }

    printf("%s", palavra2);

    return 0;
}