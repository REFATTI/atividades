SUBMISSÃO # 41120106



#include <stdio.h> {

void lerDados(int *codigo1, int *numero_pecas1, double *valor_unitario1, 
               int *codigo2, int *numero_pecas2, double *valor_unitario2) {
    scanf("%d %d %lf", codigo1, numero_pecas1, valor_unitario1);
    scanf("%d %d %lf", codigo2, numero_pecas2, valor_unitario2);
}
double calcularTotalPagar(int numero_pecas1, double valor_unitario1, 
                          int numero_pecas2, double valor_unitario2) {
    return (numero_pecas1 * valor_unitario1) + (numero_pecas2 * valor_unitario2);
}
void imprimirTotalPagar(double total_pagar) {
    printf("VALOR A PAGAR: R$ %.2f\n", total_pagar);
}
int main() {
    int codigo1, numero_pecas1, codigo2, numero_pecas2;
    double valor_unitario1, valor_unitario2;
    double total_pagar;


    lerDados(&codigo1, &numero_pecas1, &valor_unitario1, 
             &codigo2, &numero_pecas2, &valor_unitario2);

    total_pagar = calcularTotalPagar(numero_pecas1, valor_unitario1, 
                                     numero_pecas2, valor_unitario2);

    imprimirTotalPagar(total_pagar);
    return 0;
}
