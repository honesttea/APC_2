#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    FILE * arq;
    arq = fopen("arq.txt","r");
    if(arq == NULL){
        printf("Abriu nao;");
        return 0;
    }
    char stream[10000];
    fgets(stream, 10000, arq);
    printf("%s", stream);
    return 0;
}