#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    
    srand(time(NULL));

    int tam, arm,i, faces = 6, lancamentos;
    int resultados[faces];
    
    printf("Digite quantas vezes o dado sera lancado: ");
    scanf("%d", &tam);

    for (int i = 0; i < faces; i++) {
        resultados[i] = 0;
    }

    for (i = 0; i < tam; i++) {
        // lançamento dos dados
        lancamentos = rand() % faces + 1;
        resultados[lancamentos - 1]++;
    } 

    //exibição da multiplicação dos vetores
    printf("Resultados das contagens de cada face:\n");
    for (int i = 0; i < faces; i++) {
        printf("Face %d: %d ocorrencias\n", i + 1, resultados[i]);
    }
    
    return 0;
}
