#include <stdio.h>

int main(void) {
    int total = 0,numero = 0, n1=0,n2=0,i, quebra=0;
    printf("Numero:");
    scanf("%d",&n2);
    
    for(n1=0;n1<n2;n1++){
        total=0;
        for(i=2;i<n1;i++){
            if(n1%i==0){
                total++;
            }            
        }
        if(total<1&&i<n2-2){
            numero = i;
        }
    }
    quebra = n2-numero;
    printf("%d+%d=%d",numero,quebra,n2);
    
    printf("\n");
    return 0;
}
