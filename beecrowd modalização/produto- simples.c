SUBMISSÃO # 41397215


#include <stdio.h>


int produto(int a, int b) {
    return a * b;
}

int main() {
    int a = 0;
    int b = 0;
    int prod = 0;

   
    scanf("%d\n%d", &a, &b);
    
    
    prod = produto(a, b);
    
   
    printf("PROD = %d\n", prod);
    
    return 0;
}