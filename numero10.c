#include <stdio.h>
#include <string.h>

void geradorsequenciaComplementar(char *sequenciaDna, char *sequenciaComplementar, int comprimento) {
    for (int i = 0; i < comprimento; i++) {
        switch (sequenciaDna[i]) {
            case 'A':
                sequenciaComplementar[i] = 'T';
                break;
            case 'T':
                sequenciaComplementar[i] = 'A';
                break;
            case 'C':
                sequenciaComplementar[i] = 'G';
                break;
            case 'G':
                sequenciaComplementar[i] = 'C';
                break;
        }
    }
     sequenciaComplementar[comprimento] = '\0';
}

int main() {
    int basesMax = 50;
    char sequenciaDna[basesMax + 1];
    char sequenciaComplementar[basesMax + 1];

    printf("Digite a sequencia de DNA (ate %d bases): ", basesMax);
    scanf("%s", sequenciaDna);

    int comprimento = strlen(sequenciaDna);

    // Validar a sequência de entrada
    for (int i = 0; i < comprimento; i++) {
        if (sequenciaDna[i] != 'A' && sequenciaDna[i] != 'T' &&
            sequenciaDna[i] != 'C' && sequenciaDna[i] != 'G') {
            printf("Sequencia de DNA invalida. Use apenas as bases A, T, C e G.\n");
            return 1;
        }
    }

    if (comprimento > basesMax) {
        printf("A sequencia deve ter no maximo %d bases.\n", basesMax);
        return 1;
    }

    geradorsequenciaComplementar(sequenciaDna, sequenciaComplementar, comprimento);
    
    printf("Sequencia de DNA original: %s\n", sequenciaDna);
    printf("Sequencia de DNA complementar: %s\n", sequenciaComplementar);

    return 0;
}
