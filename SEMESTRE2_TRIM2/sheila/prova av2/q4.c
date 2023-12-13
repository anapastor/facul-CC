//Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos e vice-versa. Escreva ao final o vetor obtido.
#include <stdio.h>

int main() {
    int array[16];
    int aux;

    printf("Digite 16 números inteiros:\n");

    for (int i = 0; i < 16; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 8; i++) {
        aux = array[i];
        array[i] = array[i + 8];
        array[i + 8] = aux;
    }

    printf("Array encontrado depois da troca:\n");

    for (int i = 0; i < 16; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}
