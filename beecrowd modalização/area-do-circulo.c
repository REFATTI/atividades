SUBMISSÃO # 40984536

#include <stdio.h>
 double circulo(double a, double b, double c);
 
int main() {
 
 double PI = 3.14159; 
    double raio = 0.0;         
    double area = 0.0;         


    scanf("%lf", &raio);


    area = circulo( PI, raio,area);

    
    printf("A=%.4lf\n", area);
 
 
    return 0;
}
double circulo(double a, double b, double c)

{
    double area = 0.0;
     area = a * (b * b);
     return(area);
}