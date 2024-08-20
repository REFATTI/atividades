SUBMISSÃO # 40942300

#include <stdio.h>
 
int main() {
 
  int tempo, velocidade;
  double distancia,litros_gastos;
  scanf("%d %d", &tempo, &velocidade);
  
 distancia = tempo * velocidade;
 litros_gastos = distancia / 12.0;
  printf("%.3lf\n", litros_gastos);
 
    return 0;
}