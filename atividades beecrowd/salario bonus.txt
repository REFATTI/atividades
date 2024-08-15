SUBMISSÃO # 40826458
#include <stdio.h>
 
int main() {
 
char nome [100];
double salario_fixo, total_de_vendas, total;

scanf("%49s", nome); 
scanf("%lf\n%lf", &salario_fixo, &total_de_vendas);
 
  double comissao = 0.15 * total_de_vendas;
   total = salario_fixo + comissao;
 
 printf ("TOTAL = R$ %.2lf\n", total);
 
 
    return 0;
}