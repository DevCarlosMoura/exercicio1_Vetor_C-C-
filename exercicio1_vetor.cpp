#include<stdio.h>
#include<stdlib.h>

int main () {
    int vetor[5];
    int vetorb[5];
    int i;

    printf("Digite 5 elementos inteiros: \n");
    for(i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(i= 0; i < 5; i++){
        if (vetor[i] = 0){
            vetorb[i] = 1; 
        } else{
            vetorb[i] = vetor[i];
        }
        
    }
    printf("\nvetor:");
    for (i = 0; i < 5; i++)
    {
        printf("%d", vetor[i]);
    }
    
    printf("\nvetorb: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d", vetorb[i]);
    }
    printf("\n");
    

    return 0;
}
