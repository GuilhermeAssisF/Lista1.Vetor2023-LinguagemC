#include <stdio.h>

int impar(int vet[], int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; i++){
        if(vet[i]%2 != 0)
            soma += 1;
    }
    return soma;
}

int main(){

    int i, v[10] = {58, 39, 23, 89, 35, 4, 90, 41, 27, 12};

    printf("Valores do vetor:\n");
    for(i = 0; i < 10; i++){
        printf("Vetor %d: %d\n", i + 1, v[i]);
    }

    int soma = impar(v, 10);
    printf("\nQuantidade de numeros impares: %d", soma);
    
    return 0;
}