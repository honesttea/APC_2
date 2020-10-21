#include <stdio.h>

int main(void) {
    int total = 0,numero = 0, n1=0,n2=0;
    printf("Primeiro numero:");
    scanf("%d",&n1);
    printf("Segundo numero:");
    scanf("%d",&n2);

    if(n1>n2){
        numero=n1;
        n1=n2;
        n2=numero;
    }
    if(n1!=n2){
        for(;n1<n2;n1++){
            total=0;
            for(int i=2;i<n1;i++){
                if(n1%i==0){
                    total++;
                }
            }
            if(total<1){
                printf("\n%d",n1);
            }
        }
    }
    else{
        printf("\nOs numeros são iguais.\n");
    }
    printf("\n");
    return 0;
}