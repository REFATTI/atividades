SUBMISSÃO # 40982434
#include <stdio.h>
 double valores(double a, double b, double c);
int main() {
    
double a = 0.0;
double b = 0.0;
double c = 0.0;
double media = 0.0;
scanf("%lf\n%lf\n%lf", &a, &b, &c);
media = valores(a,b,c);
printf("MEDIA = %.1lf\n",media);
 
    return 0;
}
double valores(double a, double b, double c)
{
  double media = 0.0;
   media = ((a*2)+(b*3)+(c*5))/10; 
   return(media);
}