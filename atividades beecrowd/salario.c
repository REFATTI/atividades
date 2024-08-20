SUBMISSÃO # 40760843
#include <stdio.h>
 
int main() {

int funcionario = 0;
int hr_trabalhadas = 0;
double salario =0.0;
double valor =0.0;

scanf("%d\n%d\n%lf", &funcionario, &hr_trabalhadas, &valor);
salario = (hr_trabalhadas * valor);
printf("NUMBER = %d\n",funcionario);
printf("SALARY = U$ %.2lf\n",salario);


    return 0;
}