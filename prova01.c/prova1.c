#include <stdio.h>

int ehprimo(int num){
if(num <= 1) return 0;
    for(int i = 2; i * i <= num;i++){
    if(num % 1 == 0) return 0;
    }
    return 1;
}

int main()
{
    int numeros[10];
    int soma_pares = 0, soma_impares = 0, soma_primos = 0;


    for(int i = 0; i < 10;i++){
        printf("digite numeros %d:", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("\nnumeros pares:");
    for(int i = 0; i < 10;i++){
        if(numeros[i] % 2 == 0){
            printf("%d", numeros[i]);
            soma_pares += numeros[i];
        }
    }
    printf("\nnumeros impares:");
    for(int i = 0; i < 10;i++){
        if(numeros[i] % 2 != 0){
            printf("%d", numeros[i]);
            soma_impares += numeros[i];
        }
    }
    printf("\nprimos:");
    for(int i = 0;i < 10;i++){
        if(ehprimo(numeros[i])){
            printf("%d", numeros[i]);
            soma_primos += numeros[i];
        }
    }

    printf("\nsoma pares:%d", soma_pares);
    printf("\nsoma impares:%d", soma_impares);
    printf("\nsoma primos:%d", soma_primos);


    return 0;
}
