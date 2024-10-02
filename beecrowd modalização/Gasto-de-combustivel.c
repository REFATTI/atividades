SUBMISSÃO # 41791786


#include <stdio.h>

double calcular_distancia(int tempo, int velocidade) {
    return tempo * velocidade;
}

double calcular_litros(double distancia) {
    return distancia / 12.0; 
}

int main() {
    int tempo, velocidade;
    double distancia, litros_gastos;

    //printf("Digite o tempo e  velocidade em km/h:");
    scanf("%d %d", &tempo, &velocidade);

 
    if (tempo < 0 || velocidade < 0) {
        //printf("Tempo e velocidade devem ser não negativos.\n");
        return 1; 
    }

    distancia = calcular_distancia(tempo, velocidade);
    litros_gastos = calcular_litros(distancia);

    printf("%.3lf\n", litros_gastos);

    return 0;
}
