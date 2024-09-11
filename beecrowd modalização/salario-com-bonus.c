SUBMISSÃO # 41097115




#include <stdio.h>
 
double soma(double a, double y, double x);

int main() {
    char nome[100];
    double salario_fixo, total_de_vendas, comissao = 0.15, total;

    scanf("%49s", nome); 
    scanf("%lf %lf", &salario_fixo, &total_de_vendas);
 
    total = soma(salario_fixo, total_de_vendas, comissao);
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}

double soma(double a, double y, double x) {
    double soma = 0.0;
    soma = a + (y * x);
    return soma;
}

