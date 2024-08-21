SUBMISSÃO # 40981495

#include <stdio.h>

int MaiorNum(int x, int y, int z);

int main() {
    int a, b, c;
    int maior_ab, maior_abc;
    
    scanf("%d %d %d", &a, &b, &c);
    maior_abc = MaiorNum(a,b,c);
  
    printf("%d eh o maior\n", maior_abc);

 
    return 0;
}

int MaiorNum(int x, int y, int z)
{
    int maior_ab, maior_abc;
    maior_ab = (x + y + abs(x - y)) / 2;
    maior_abc = (maior_ab + z + abs(maior_ab - z)) / 2;
    
    return(maior_abc);
}