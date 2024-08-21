SUBMISSÃO # 40982955

#include <stdio.h>
 int valor(int a, int b, int c, int d);
 
int main(){
 
int a = 0, b = 0, c = 0, d = 0;
int diferenca = 0;

scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);

    diferenca = valor(a,b,c,d);

printf("DIFERENCA = %d\n", diferenca);

return 0;
}
int valor(int a, int b, int c, int d)
{
   int diferenca = 0;
   diferenca = (a*b - c*d);
   return(diferenca);
}