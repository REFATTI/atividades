SUBMISSÃO # 40941200

#include <stdio.h>
 
int main() {
 
double X1, X2, Y1, Y2;
double distancia = 0.0;

scanf("%lf %lf", &X1, &Y1);
scanf("%lf %lf", &X2, &Y2);

distancia =sqrt((X2 - X1) * (X2 - X1) + (Y2 - Y1) * (Y2 - Y1));
printf("%.4lf\n", distancia);
 
    return 0;
}