#include <stdio.h>

void maiorMenor(int *vet, int *tam, int *menor, int *maior){
   int i;
   *menor = *vet;
   *maior = *vet;
   for( i = 0; i<tam; i++){
        if(*menor > *(vet + i))
            *menor = *(vet + i);
        if(*maior < *(vet + i))
            *maior = *(vet + i);
    }
}

int main(){

    int i, menor, maior, v[10] = {58, 39, 23, 89, 35, 4, 90, 41, 27, 12};

    printf("Valores do vetor:\n");
    for(i = 0; i < 10; i++){
        printf("Vetor %d: %d\n", i + 1, v[i]);
    }

    maiorMenor(v, 10, &menor, &maior);
    printf("\nMenor: %d\t\nMaior: %d\n", menor, maior);
    
    return 0;
}