SUBMISSÃO # 40985447

#include <stdio.h>
 int basico(int a, int b);
 
int main() {
     int a = 0, b = 0, x = 0;
     
     scanf("%d %d",&a,&b);
     x = basico(a,b);
     printf("X = %d\n",x);
     
     
  
     
     
    return 0;
}int basico(int a, int b)
{
    int soma = 0;
    soma = a + b;
    return(soma);
}