//multiplique os valores de um vetor de Reais de 20 posições pelos valores de um outro vetor de reais de 20 posições
//PRIMEIRO vetor deve ser inicializado com valores CRESCENTES a partir de 1 e o SEGUNDO vetor com valores DECRESCENTES a partir de 20.
//Os resultados das multiplicações devem ser armazenados num TERCEIRO vetor.

#include <stdio.h>

int main() {
    float vetor1[20];
    float vetor2[20];
    float final[20];


    for (int i = 0; i < 20; i++) {
        vetor1[i] = i + 1;
    }

    for (int i = 0; i < 20; i++) {
        vetor2[i] = 20 - i;
    }

    for (int i = 0; i < 20; i++) {
        final[i] = vetor1[i] * vetor2[i];
    }

    printf("Resultados das multiplicações:\n");
    for (int i = 0; i < 20; i++) {
        printf("%.2f * %.2f = %.2f\n", vetor1[i], vetor2[i], final[i]);
    }

    return 0;
}
