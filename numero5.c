#include <stdio.h>

int igualVetor(int vet[], int tamanho, int igual){
    int soma = 0;
    for (int i = 0; i < tamanho; i++){
        if(vet[i] == igual)
            soma += 1;
    }
    return soma;
}

int main(){

    int i, num, v[10] = {1, 2, 1, 3, 1, 2, 2, 1, 3, 1};

    printf("Digite um numero de 1 a 3: ");
    scanf("%d", &num);

    if( num <= 0 || num > 3){
        printf("Tamanho invalido. O tamanho deve estar entre 1 e 100");
    }

    int soma = igualVetor(v, 10, num);
    printf("\nQuantidade de vezes que esse numero aparece no vetor: %d\n", soma);

    printf("\nValores do vetor:\n");
    for(i = 0; i < 10; i++){
        printf("Vetor %d: %d\n", i + 1, v[i]);
    }

    return 0;
}