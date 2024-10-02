SUBMISSÃO # 41119108

#include <stdio.h>

#define PI 3.14159


double calcularVolume(double raio) {
    return (4.0 / 3.0) * PI * raio * raio * raio;
}


void imprimirVolume(double volume) {
    printf("VOLUME = %.3f\n", volume);
}

int main() {
    double raio = 0.0;
    double volume = 0.0;

    
    scanf("%lf", &raio);

    
    volume = calcularVolume(raio);
    imprimirVolume(volume);


