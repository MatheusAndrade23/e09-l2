#include <stdio.h>
#include <stdbool.h>

int main() {
    int numberOfTests = 0;

    printf("Digite o número de testes: ");
    scanf("%d", &numberOfTests);

    int numberOfEvenNumbersPerTest[numberOfTests];
    int numberOfPositiveNumbersPerTest[numberOfTests];

    for (int i = 0; i < numberOfTests; i++) {
        numberOfEvenNumbersPerTest[i] = 0;
        numberOfPositiveNumbersPerTest[i] = 0;
    }

    for (int i = 0; i < numberOfTests; i++) {
        for (int j = 0; j < 5; j++) {
            int number = 0;
            scanf("%d", &number);

            if (number % 2 == 0) numberOfEvenNumbersPerTest[i]++;
            if (number >= 0) numberOfPositiveNumbersPerTest[i]++;
        }
    }

    for (int i = 0; i < numberOfTests; i++) {
        printf("Quantidade de numeros pares: %d\n", numberOfEvenNumbersPerTest[i]);
        printf("Quantidade de numeros impares: %d\n", 5 - numberOfEvenNumbersPerTest[i]);
        printf("Quantidade de numeros positivos: %d\n", numberOfPositiveNumbersPerTest[i]);
        printf("Quantidade de numeros negativos: %d\n\n", 5 - numberOfPositiveNumbersPerTest[i]);
    }

    return 0;
}
