SUBMISSÃO # 40941200


#include <stdio.h>

#define PI 3.14159


double calcularVolume(double raio) {
    return (4.0 / 3.0) * PI * raio * raio * raio;
}


void imprimirVolume(double volume) {
    printf("VOLUME = %.3f\n", volume);
}

double lerRaio() {
    double raio;
    printf("Digite o raio: ");
    scanf("%lf", &raio);
    return raio;
}

int main() {
    double raio = lerRaio(); // Get radius from user
    double volume = calcularVolume(raio); // Calculate volume
    imprimirVolume(volume); // Print volume

    return 0;
}