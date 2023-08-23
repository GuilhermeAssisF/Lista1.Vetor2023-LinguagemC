#include <stdio.h>
#include <string.h>

int main() {
    char mensagem[1001];
    gets(mensagem); 

    int tamanho = strlen(mensagem);

    for (int i = 0; i < tamanho; i++) {
        if (mensagem[i] == 'p' || mensagem[i] == 'P') {
            if (i + 1 < tamanho) {
                if (mensagem[i + 1] == 'p' || mensagem[i + 1] == 'P') {
                    i++; 
                }
            }
        } else {
            printf("%c", mensagem[i]);
        }
    }

    printf("\n");

    return 0;
}
