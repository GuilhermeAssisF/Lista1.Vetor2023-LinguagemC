#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));

    int v[100], num;
    printf("Digite um numero de 1 a 200: ");
    scanf("%d", &num);

    // Gerar e imprimir 100 números aleatórios
    int encontrado = 0;
    for (int i = 0; i < 100; i++) {
        v[i] = rand() % 200 + 1;
        if(v[i] == num){
            printf("O numero %d foi encontrado no vetoor na posicao %d", num, i);
            encontrado = 1;
            break;
        }    
    }
    
    if (!encontrado) {
        printf("O numero %d nao foi encontrado no vetor.\n", num);
    }

    return 0;
}
