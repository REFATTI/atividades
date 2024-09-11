SUBMISSÃO # 40963066

#include <stdio.h>

double Consumo(int a, double b);

int main()
{
 
    int distancia;
    double combustivel, respostafinal;

    scanf("%d\n%lf", &distancia, &combustivel);
    respostafinal = Consumo(distancia,combustivel);
    printf("%.3lf km/l\n", respostafinal);  
    return 0;
}

double Consumo(int a, double b)
{
    double consumo = 0.0;
    consumo = a / b;

    return(consumo);    
}