#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE * loucura;
    int t,i;
    char streamzinha[1000];

    loucura = fopen("nomes.txt","r");
    for(i=0;fgets(streamzinha,1000,loucura)!=NULL;i++){
        if(streamzinha[0]=='b'||streamzinha[0]=='B'){
            printf("%s",streamzinha);
        }
    }

    fclose(loucura);

    return 0;
}