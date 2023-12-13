//lê, soma e imprime o resultado da soma de um vetor de inteiros de 10 posições.
#include <stdio.h>

int main() {
    int array[10];
    int soma = 0;

    printf("Digite 10 números inteiros:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 10; i++) {
        soma += array[i];
    }

    printf("A soma dos números do vetor é: %d\n", soma);

    return 0;
}
