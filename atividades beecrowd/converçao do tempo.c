SUBMISSÃO # 40941846
#include <stdio.h>
 
int main() {
 
int segundos;
int horas; 
int minutos;

scanf("%d", &segundos);
  horas = segundos / 3600;
     minutos = (segundos % 3600) / 60;
    segundos = segundos % 60;
 printf("%d:%d:%d\n", horas, minutos, segundos);




 
    return 0;
}