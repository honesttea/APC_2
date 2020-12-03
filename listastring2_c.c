#include <stdio.h>
#include <string.h>

int main(){
    char frase[1000];
    int i,j;
    printf("Frase:\n");
    fgets(frase,1000,stdin);
    printf("I e J:\n");
    scanf("%d %d",&i,&j);

    for(;i<j-1;i++){
        printf("%c",frase[i]);
    }

    return 0;
}