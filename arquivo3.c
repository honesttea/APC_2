#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE * loucura;
    int t=0,i;
    char streamzinha[1000];

    loucura = fopen("nomes.txt","r");
    for(i=0;fgets(streamzinha,1000,loucura)!=NULL;i++){
        if(streamzinha[0]=='b'||streamzinha[0]=='B'){
            t++;
        }
    }
    
    printf("No arquivo possui %d pessoas com o nome que inicia com a letra B.",t);
    fclose(loucura);

    return 0;
}
