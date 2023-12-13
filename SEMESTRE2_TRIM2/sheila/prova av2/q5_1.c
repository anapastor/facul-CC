//questão 1 com função
#include <stdio.h>

void setSize(int array[], int size) {
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            array[i] = 0;
        } else {
            array[i] = 1;
        }
    }
}

int main() {
    int array[100];
    setSize(array, 100);

    printf("Array:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
