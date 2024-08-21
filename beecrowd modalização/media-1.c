SUBMISSÃO # 40982268

#include <stdio.h>
 double nota(double a, double b);
 
int main() {
 
   double a = 0.0;
   double b = 0.0;
   double media = 0.0;
   
   scanf("%lf\n%lf", &a, &b);
  
   media = nota(a,b);
   
    printf("MEDIA = %.5lf\n",media);
 
    return 0;
}
double nota(double a, double b)
{
    double media = 0.0;
    media =((a*3.5)+(b*7.5))/11;
    return(media);
}