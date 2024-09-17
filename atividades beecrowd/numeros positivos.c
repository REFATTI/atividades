SUBMISSÃO # 41506748

#include <stdio.h>
int main()
{
    int valor[6];
    int quantidades_positivo = 0;
    int i = 0;
    
    while (i < 6){
        
        scanf("%d", &valor[i]);
        
        i++;
    }
    
    for (i = 0; i < 6; i++) {
        if (valor[i] > 0){
            quantidades_positivo ++;
        }
    }
    
    printf("%d valores positivos\n", quantidades_positivo);
    
    
    

    return 0;
}

