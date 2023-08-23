#include <stdio.h>

int calcularSoma(int vetor[], int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; i++){
        soma += vetor[i];
    }
    return soma;
}

int main(){

    int n;
    
    printf("Quantos elementos tera seu vetor? (ate 100)");
    scanf("%d", &n);

    if( n <= 0 || n  > 100){
        printf("Tamanho inválido. O tamanho deve estar entre 1 e 100");
    }

    int vetor[n];

    printf("digite os elemento do vetor: \n");
        for(int i = 0; i < n; i++){
            printf("elemento %d: ", i + 1);
            scanf("%d", &vetor[i]);
        }

    int soma = calcularSoma(vetor, n);

    printf("A soma dos elementos do vetor e: %d\n", soma);

    return 0;
}