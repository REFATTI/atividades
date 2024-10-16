#include <stdio.h>

int ehprimo(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int ordenar(int numeros[], int size) {
    int aux;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (numeros[i] > numeros[j]) {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }
}

int main() {
    int numeros[10];
    int soma_pares = 0, soma_impares = 0;

    
    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("\nNúmeros pares:");
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
           soma_pares += numeros[i];
        }
    }
    printf("\nNúmeros ímpares: ");
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 != 0) {
            printf("%d ", numeros[i]);
            soma_impares += numeros[i];
    }
    }
    printf("\nNúmeros primo: ");
    for (int i = 0; i < 10; i++) {
        if (ehprimo(numeros[i])) {
            printf("%d ", numeros[i]);
           }
    }

    ordenar(numeros, 10);
    printf("\nNúmeros em ordem crescente: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nSoma dos pares: %d", soma_pares);
    printf("\nSoma dos ímpares: %d\n", soma_impares);

    return 0;
}
