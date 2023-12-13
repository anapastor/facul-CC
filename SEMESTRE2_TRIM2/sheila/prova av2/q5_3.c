//questão 3 com função
#include <stdio.h>

void multiplicarArrays(float array1[], float array2[], float final[], int size) {
    for (int i = 0; i < size; i++) {
        final[i] = array1[i] * array2[i];
    }
}

int main() {
    float array1[20];
    float array2[20];
    float final[20];

    for (int i = 0; i < 20; i++) {
        array1[i] = i + 1;
        array2[i] = 20 - i;
    }

    multiplicarArrays(array1, array2, final, 20);

    printf("Resultados das multiplicações:\n");
    for (int i = 0; i < 20; i++) {
        printf("%.2f * %.2f = %.2f\n", array1[i], array2[i], final[i]);
    }

    return 0;
}
