#include <stdio.h>
int contarletras(char * vetor);
int main()
{
    int indice = 0;
    char nomecliente1 [30] = "refatti";
    char nomecliente2 [30] = {'F','U','L','A','N','O'};
    char nomecliente3 [] = "gabriel linduu";
    
    printf("%s\n", nomecliente1);
    printf("%s\n", nomecliente2);
    printf("%s\n", nomecliente3);
    
    for(indice = 0; indice < 10; indice++)
    {
        scanf("%c", &nomecliente3[indice]);
        
    }
        
        nomecliente3[indice-1] = '\0';
    
    
    
    printf("%d\n", contarletras(nomecliente1));
    printf("%d\n", contarletras(nomecliente2));
    printf("%d\n", contarletras(nomecliente3));

    return 0;}
    int contarletras(char * vetor)
    
    {
        int letras = 0;
        int F = 0;
        
        while(vetor [F] != '\0')
        {
            letras ++;
            F++;
        }
        return letras;
    }
    
