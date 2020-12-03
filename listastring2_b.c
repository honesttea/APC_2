#include <stdio.h>
#include <string.h>

int main(){
    char produto[1000];
    double preco, desconto;
    printf("Nome do produto:\n");
    fgets(produto,1000,stdin);
    printf("Valor do produto:\n");
    scanf("%lf",&preco);
    desconto=preco-(preco*0.1);
    printf("Nome do Produto: %s", produto);
    printf("Valor total: %.2lf\n", preco);
    printf("Valor com 10 por cento de desconto: %.2lf\n", desconto);

    return 0;
}