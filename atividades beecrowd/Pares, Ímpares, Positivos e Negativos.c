SUBMISSÃO # 41793245


#include <stdio.h>
 
int main() {
    
    int vetor[5];
    
    int pares = 0;
    int impares = 0;
    int positivos = 0;
    int negativos = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i < 5; i++){
        if(vetor[i] % 2 == 0){
            pares++;
        } else {
            impares++;
        }
        if (vetor[i] > 0){
            positivos++;
        } else if(vetor[i] < 0){
            negativos++;
        }
    }
    
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}