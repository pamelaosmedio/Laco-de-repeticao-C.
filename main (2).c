#include <stdio.h>

int main() 
{
    #define TAM_MAX 10
   
    int vet1[TAM_MAX];
    int maior;
    int i;
    
    for (i=0; i<TAM_MAX; i++)
        scanf("%d", &vet1[i]);
        
    maior = vet1[0];
    for(i=0; i<TAM_MAX; i++)
        if(vet1[i] > maior)
            maior= vet1[i];
    printf("o maior elemento é %d \n", maior);

    return 0;
}
