#include <stdio.h>

int main() {
    float notas[5];
    for (int i = 0; i < 5; i++) {
        scanf("%f", &notas[i]);
    }

    
    for (int i = 0; i < 4; i++) {
        int min_index = i;
        for (int j = i + 1; j < 5; j++) {
            if (notas[j] < notas[min_index]) {
                min_index = j;
            }
        }
        float temp = notas[i];
        notas[i] = notas[min_index];
        notas[min_index] = temp;
    }

    
    float nota_final = notas[1] + notas[2] + notas[3];

    printf("%.1f\n", nota_final);

    return 0;
}
