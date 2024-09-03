#include <stdio.h>

double soma(double a, double b);
double subtracao(double a, double b);
double multiplicacao(double a, double b);
double divisao(double a, double b);
int potencia(int base, int expoente);
double raiz_quadrada(double num);
int fatorial(int n);
int mdc(int a, int b);
int mmc(int a, int b, int mc_ab);

int main() {
    int escolha;
    double a, b;
    int num;
    double n;
    int num1;
    double total;
    double base;

    do {
        printf("Escolha uma operacao:\n");
        printf("0 - Sair\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - divisao\n");
        printf("5 - Potenciacao\n");
        printf("6 - Raiz quadrada\n");
        printf("7 - Fatorial\n");
        printf("8 - MDC\n");
        printf("9 - MMC\n");
        printf("Digite uma operacao: ");
        scanf("%d", &escolha);


        if (escolha == 0) {
            printf("Saindo!\n");
            break;// para o programa fazer o loop apos o termino e sua conta.
        }

         /*printf("Digite um valor: ");
        scanf("%lf", &a);
        printf("Digite outro valor: ");
        scanf("%lf", &b);*/



        if (escolha == 1) {
                 printf("Digite um valor: ");
        scanf("%lf", &a);
        printf("Digite outro valor: ");
        scanf("%lf", &b);
            total = soma(a,b);
            printf("resultado %.5lf\n", total);
        } else if (escolha == 2) {
            printf("Digite um valor: ");
        scanf("%lf", &a);
        printf("Digite outro valor: ");
        scanf("%lf", &b);

            total = subtracao(a, b);
            printf("Resultado: %.5lf\n", total);
        } else if (escolha == 3) {
            printf("Digite um valor: ");
        scanf("%lf", &a);
        printf("Digite outro valor: ");
        scanf("%lf", &b);
            total = multiplicacao(a, b);
            printf("Resultado final: %.5lf\n", total);
            }else if (escolha == 4){
                printf("Digite um valor: ");
        scanf("%lf", &a);
        printf("Digite outro valor: ");
        scanf("%lf", &b);
                total = divisao(a, b);
            printf("Resultado final: %.5lf\n", total);
                }else if (escolha == 5) {
            printf("Digite a base: ");
            scanf("%lf", &base);
            printf("Digite o expoente: ");
            scanf("%d", &num);
            total = potencia(base, num);
            printf("Resultado: %.5lf\n", total);

        } else if (escolha == 6) {
            printf("Digite o numero que deseja descobrir a raiz: \n");
            scanf("%lf", &n);
            total = raiz_quadrada(n);
            printf("resultado: %.5lf\n", total);


        } else if (escolha == 7) {
            printf("Digite um valor: ");
            scanf("%d", &num);
            int total = fatorial(num);
            if (total != -1) { // Ver se calculo foi bem feito
                printf("O resultado de %d é %d.\n", num, total);
            }
        } else if (escolha == 8) {
            printf("Digite o primeiro numero inteiro: ");
            scanf("%d", &num);
            printf("Digite o segundo numero inteiro: ");
            scanf("%d", &num1);

            int total = mdc(num, num1);

            printf("O MDC de %d e %d é %d.\n", num, num1, total);

        } else if (escolha == 9) {
            int mdc_ab = 6; // Assumindo que o MDC dos números é 6
            printf("Digite o primeiro número inteiro: ");
            scanf("%d", &num);
            printf("Digite o segundo número inteiro: ");
            scanf("%d", &num1);
            int resultado = mmc(num, num1, mdc_ab);

            printf("O MMC de %d e %d é %d.\n", num, num1, resultado);
        }
    } while (escolha != 0);//O programa solicita ao usuario para digitar o numero 1 e vai ocorre dentro du while terminao o loop com break  bloco do.

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
        printf("erro \n");
        return 0;
    }
}

int potencia(int base, int expoente) {
    int total = 1;
    for (int i = 0; i < expoente; i++) {
        total *= base;
    }
    return total;
}

int fatorial(int n) {
    if (n < 0) {
        printf("Fatorial de número negativo não pode ser calculado.\n");
        return -1;
    }

    int total = 1;
    for (int i = 1; i <= n; i++) {
        total *= i;
    }

    return total;
}

double raiz_quadrada(double num) {
    if (num < 0) {
        printf("Número negativo não pode ter raiz quadrada.\n");
        return 0;
    }


    double tentativa = num;
    double b = 0.5;

    for (int i = 0; i < 100; i++) {
        tentativa = b * (tentativa + (num / tentativa));

    }

    return (tentativa);
}

int mdc(int a, int b) {
    //verifica se a ou b sao negativos, se for converte os para positivo
    if (a < 0) a = -a;//se a for menor que zero ele vai ser convertido e b a mesma coisa
    if (b < 0) b = -b;

    int resto;
    while (b != 0)//usei while para continuar a executar  {
        resto = a % b;
        a = b;
        b = resto;


    return a;

    }




int mmc(int a, int b, int mc_ab) {
    return (a / mc_ab) * b;
}
double segundo_grau(double a, double b, double c) {

     double del = b * b - 4 * ( a * c );

if ( del == 0 ) {
    printf("erro \n");
}




}
