#include <stdio.h>


double soma(double a, double b);
double subtracao(double a, double b);
double multiplicacao(double a, double b);
double divisao(double a, double b);
double potenciacao(double base, int expo);
double raiz_quadrada(double n);

int main() {
    int escolha;
    double a, b;
    int num;
    double total;
    double base;

    do {
        printf("Escolha uma operação:\n");
        printf("1 - Sair\n");
        printf("2 - Soma\n");
        printf("3 - Subtracao\n");
        printf("4 - Multiplicacao\n");
        printf("5 - Potenciacao\n");
        printf("6 - Raiz quadrada\n");
        printf("Digite uma operacao: ");
        scanf("%d", &escolha);


        if (escolha == 1) {
            printf("Saindo!\n");
            break;
        }

         printf("Digite um valor: ");
            scanf("%lf", &a);
            printf("Digite outro valor: ");
            scanf("%lf", &b);

        if (escolha == 2) {
            total = soma(a, b);
            printf("Resultado: %.5lf\n", total);
        } else if (escolha == 3) {
            total = subtracao(a, b);
            printf("Resultado: %.5lf\n", total);
        } else if (escolha == 4) {
            total = multiplicacao(a, b);
            printf("Resultado final: %.5lf\n", total);
        } else if (escolha == 5) {
            printf("Digite a base: ");
            scanf("%lf", &base);
            printf("Digite o expoente: ");
            scanf("%d", &num);
            total = potenciacao(base, num);
            printf("Resultado: %.5lf\n", total);
        } else if (escolha == 6) {
            printf("Digite um número para descobrir a raiz: ");
            scanf("%lf", &a);
            double resultado = raiz_quadrada(a);
            if (resultado != -1) {
                printf("O resultado da raiz de %.2lf é aproximadamente %.6lf\n", a, resultado);
            }
        } else {
            printf("Escolha inválida. Tente novamente.\n");
        }

    } while (escolha != 1);

    return 0;
}

double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
    return a - b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisão por zero não é permitida.\n");
        return 0;
    }
}

double potenciacao(double base, int expo) {
    double total = 1;
    if (expo > 0) {
        total = base;
        expo--;
        if (expo > 0) {
            total *= potenciacao(base, expo);
        }
    }
    return total;
}

double raiz_quadrada(double n) {
    if (n < 0) {
        printf("Erro: Raiz quadrada de número negativo não existe.\n");
        return -1;
    }
    double x = n;
    double x_valor;
    double precisao = 0.00001;
    while (1) {
        x_valor = (x + n / x) / 2;
        if ((x_valor - x) < precisao && (x_valor - x) > -precisao) {
            break;
        }
        x = x_valor;
    }
    return x_valor;
}
