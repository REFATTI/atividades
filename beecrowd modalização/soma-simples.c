SUBMISSÃO # 40981402

#include <stdio.h>
  int somainteira(int a, int b);
  
int main() {

     int a = 0;
     int b = 0;
     int resp = 0;
     
     
     scanf("%d\n%d",&a, &b);  
     resp = somainteira (a,b);
     printf("SOMA = %d\n", resp);
     
   
    
 
    return 0;

    
}

int somainteira(int x, int y)
{
    int soma = 0;
    
    soma = x+y;
    
    return(soma);
}