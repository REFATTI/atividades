
SUBMISSÃO # 40999403


#include <stdio.h>

double trabalho(int horas, double valor_por_hora);

int main() {
    int funcionario = 0;
    int hr_trabalhadas = 0;
    double valor = 0.0;
    double salario = 0.0;

  
    scanf("%d %d %lf", &funcionario, &hr_trabalhadas, &valor);

  
    salario = trabalho(hr_trabalhadas, valor);


    printf("NUMBER = %d\n", funcionario);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}
double trabalho(int horas, double valor_por_hora) {
    double salario = 0.0;
    salario = horas * valor_por_hora;
    return salario;
}