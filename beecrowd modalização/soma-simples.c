SUBMISSÃO # 40981402

#include <stdio.h>
  int somainteira(int x, int y);

int main() {

     int x = 0;
     int y = 0;
     int resp = 0;


     scanf("%d\n%d",&x, &y);
     resp = somainteira (x,y);
     printf("SOMA = %d\n", resp);




    return 0;


}

int somainteira(int x, int y)
{
    int soma = 0;

    soma = x+y;

    return(soma);
}
