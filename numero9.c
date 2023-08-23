#include <stdio.h>
#include <string.h>

int main() {
	int i;
    char vetor[100];

    printf("Digite uma string (limite de 100 caracteres):\n");
    gets(vetor);

    int comprimento = strlen(vetor);

    printf("Vetor na ordem inversa: ");
    for (i = comprimento - 1; i >= 0; i--) {
        printf("%c", vetor[i]);
    }
    return 0;
}