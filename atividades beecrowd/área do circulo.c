SUBMISSÃO # 40837319
#include <stdio.h>
 
int main() {
 double PI = 3.14159; // Valor de PI
    double raio;         // Variável para armazenar o raio
    double area;         // Variável para armazenar a área

    // Ler o valor do raio
    scanf("%lf", &raio);

    // Calcular a área
    area = PI * (raio * raio);

    // Imprimir a área com 4 casas decimais
    printf("A=%.4lf\n", area);
 
 
    return 0;
}