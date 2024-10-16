SUBMISSÃO # 41811912

#include <stdio.h>
 
int main() {
 
    int codigo = 0, quantidade =  0;
    double preco = 0;
    
    scanf("%d %d", &codigo, &quantidade);
    
    if (codigo == 1){
        printf("Total: R$ %.2lf\n", 4.00*quantidade);
    } else if (codigo == 2){
        printf("Total: R$ %.2lf\n", 4.50*quantidade);
    } else if (codigo == 3){
        printf("Total: R$ %.2lf\n", 5.00*quantidade);
    } else if (codigo == 4){
        printf("Total: R$ %.2lf\n", 2.00*quantidade);
    } else if (codigo == 5){
        printf("Total: R$ %.2lf\n", 1.50*quantidade);
    }
 
    return 0;
}