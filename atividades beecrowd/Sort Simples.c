#include <stdio.h>
#include <limits.h>


int main() {
 

SUBMISSÃO # 41777057
Sort Simples




  int a = 0,b = 0,c = 0;
  int menor = INT_MAX;
  int meio;
  int maior = INT_MIN;
  
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  
  if(maior < a){
      maior = a;
  }
    if(maior < b){
      maior = b;
  }
   if(maior < c){
      maior = c;
  }
  if(menor > a){
      menor  = a;
  }
    if(menor > b){
      menor  = b;
  }
      if(menor > c){
      menor  = c;
  }
  meio = (a + b + c) - (menor + maior);
  
  printf("%d\n%d\n%d\n\n", menor,meio,maior);
  printf("%d\n%d\n%d\n", a,b,c);
 
    return 0;

