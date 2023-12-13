//questão 4 com função.
#include <stdio.h>

void trocarValores(int array[], int size) {
    int aux;
    for (int i = 0; i < size / 2; i++) {
        aux = array[i];
        array[i] = array[i + size / 2];
        array[i + size / 2] = aux;
    }
}

int main() {
    int array[16];

    printf("Digite 16 números inteiros:\n");
    for (int i = 0; i < 16; i++) {
        scanf("%d", &array[i]);
    }

    trocarValores(array, 16);

    printf("Array obtido após a troca:\n");
    for (int i = 0; i < 16; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
