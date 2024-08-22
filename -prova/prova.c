#include <stdio.h>
double soma (double a, double b);
int main()
{
    int resultado;
    double a = 0.0, b = 0.0, t = 0;

    printf("Escolha a operaçao:\n");
    printf("0-Sair\n");
    printf("1-Soma\n");
    printf("2-Subtração\n");
    printf("3- Multiplicação");
    printf("4- Divisão\n");


    scanf("%lf", &resultado);

    if(resultado ==1){
    printf("digite seu numero:\n");
    scanf("%lf\n%lf", &a, &b);
    printf("digite seu segundo numero:\n");
    t = soma(a,b);
printf("o resultado de seu calculo é %.5lf",t);


    }


    return 0;
} double soma (double a, double b)

 {

    double t = 0.0;
    t = a + b;

return(t);
}