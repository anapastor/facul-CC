//questão 2 com função
#include <stdio.h>

int somaArray(int array[], int size) {
    int soma = 0;
    for (int i = 0; i < size; i++) {
        soma += array[i];
    }
    return soma;
}

int main() {
    int array[10];

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    int resultado = somaArray(array, 10);
    printf("A soma dos números do vetor é: %d\n", resultado);

    return 0;
}
