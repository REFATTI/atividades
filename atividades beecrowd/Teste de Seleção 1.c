SUBMISSÃO # 41839595


#include <stdio.h>
 
int main() {
 
int A = 0, B = 0, C = 0, D = 0;

scanf("%d", &A);
scanf("%d", &B);
scanf("%d", &C);
scanf("%d", &D);

 if (B > C && D > A && (C + D) > (A + B) && C > 0 && D > 0 && A % 2 == 0) {
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }
    


    return 0;
}