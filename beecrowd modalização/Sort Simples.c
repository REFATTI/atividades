SUBMISSÃO # 41777057


#include <stdio.h>
#include <limits.h>


int encontrarMenor(int a, int b, int c) {
    int menor = INT_MAX;
    if (menor > a) menor = a;
    if (menor > b) menor = b;
    if (menor > c) menor = c;
    return menor;
}


int encontrarMaior(int a, int b, int c) {
    int maior = INT_MIN;
    if (maior < a) maior = a;
    if (maior < b) maior = b;
    if (maior < c) maior = c;
    return maior;
}


int encontrarMeio(int a, int b, int c, int menor, int maior) {
    return (a + b + c) - (menor + maior);
}

int main() {
    int a, b, c;

   
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

  
    int menor = encontrarMenor(a, b, c);
    int maior = encontrarMaior(a, b, c);
    int meio = encontrarMeio(a, b, c, menor, maior);

   
    printf("%d\n%d\n%d\n\n", menor, meio, maior);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
