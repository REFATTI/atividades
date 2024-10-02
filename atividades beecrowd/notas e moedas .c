SUBMISSÃO # 40942205

#include <stdio.h>

int main() {

 double valor;
    int centavos;


    scanf("%lf", &valor);


    centavos = (int) (valor * 100 + 0.5);


    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    double notas_valores[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    double moedas_valores[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int quantidade = centavos / notas[i];
        centavos %= notas[i];
        printf("%d nota(s) de R$ %.2f\n", quantidade, notas_valores[i]);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int quantidade = centavos / moedas[i];
        centavos %= moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", quantidade, moedas_valores[i]);
    }
    return 0;
}
