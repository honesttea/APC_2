#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    FILE * arq;
    arq = fopen("arq.txt", "w");
    if(arq == NULL){
        printf("Abriu nao;");
        return 0;
    }
    int i;
    char stream[10000];
    fgets(stream,10000, stdin);
    for(i=0;stream[i]!='0';i++){
        fprintf(arq, "%c", stream[i]);
    }
    fclose(arq);
    return 0;
}