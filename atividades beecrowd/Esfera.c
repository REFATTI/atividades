SUBMISSÃO # 40841036
#include <stdio.h>
 
int main() {
 
double raio = 0.0;
double PI = 3.14159;
double volume = 0.0;

scanf("%lf %lf %lf", &raio, &PI, &volume);

volume = (4/3.0) * PI * raio * raio *raio;
printf("VOLUME = %.3lf\n", volume);


 
    return 0;
}