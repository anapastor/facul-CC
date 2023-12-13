//preenche um vetor de inteiros de 100 números, colocando 0 nas posições PARES e 1 nas IMPARES.
#include <stdio.h>

int main(){
    int array[100];

    for (int i = 0; i < 100; i++){
        if(i % 2 == 0){
            array[i] = 0;
        }

        else{
            array[i] = 1;
        }
    }    

    printf("Array[100]: \n");
    for(int i = 0; i < 100; i++) {
        printf("%d ", array[i]);
    }

    return 0;
    }