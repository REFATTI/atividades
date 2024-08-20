SUBMISSÃO # 40837319
#include <stdio.h>
 
int main() {
 
 int codigo1, numero_pecas1, codigo2, numero_pecas2;
    double valor_unitario1, valor_unitario2;
    double total_pagar;
    

 scanf("%d %d %lf", &codigo1, &numero_pecas1, &valor_unitario1);
scanf("%d %d %lf", &codigo2, &numero_pecas2, &valor_unitario2);
  total_pagar = (numero_pecas1 * valor_unitario1) + (numero_pecas2 * valor_unitario2);
  
 
  printf("VALOR A PAGAR: R$ %.2f\n", total_pagar); 
   
    return 0;
}