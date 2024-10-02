
SUBMISSÃO # 41791980


#include <stdio.h>


int calcular_tempo(int distancia) {
    return 2 * distancia;
}

int ler_distancia() {
    int distancia;
    
    scanf("%d", &distancia);
    return distancia;
}

int main() {
    int distancia = ler_distancia();
    int tempo = calcular_tempo(distancia);
    printf("%d minutos\n", tempo);

    return 0;
}