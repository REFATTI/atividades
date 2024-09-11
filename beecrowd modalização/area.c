SUBMISSÃO # 41396636


#include <stdio.h>

int main() {
    double A = 0.0, B = 0.0, C = 0.0;
    const double PI = 3.14159; 
    
    scanf("%lf %lf %lf", &A, &B, &C);

    double triangulo = 0.5 * A * C;
    double circulo = PI * C * C;
    double trapezio = 0.5 * (A + B) * C;
    double quadrado = B * B;
    double retangulo = A * B;

    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);

    return 0;
}