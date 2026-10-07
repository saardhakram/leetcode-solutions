#include <stdio.h>
#include <stdlib.h>

char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    char** result = (char**)malloc(n * sizeof(char*));

    for (int i = 1; i <= n; i++) {
        result[i - 1] = (char*)malloc(12 * sizeof(char));

        if (i % 3 == 0 && i % 5 == 0) {
            sprintf(result[i - 1], "FizzBuzz");
        } else if (i % 3 == 0) {
            sprintf(result[i - 1], "Fizz");
        } else if (i % 5 == 0) {
            sprintf(result[i - 1], "Buzz");
        } else {
            sprintf(result[i - 1], "%d", i);
        }
    }

    return result;
}

int main() {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int returnSize;
    
    char** answer = fizzBuzz(n, &returnSize);

    printf("[");
    for (int i = 0; i < returnSize; i++) {
        printf("\"%s\"", answer[i]);
        if (i < returnSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    for (int i = 0; i < returnSize; i++) {
        free(answer[i]);
    }
    free(answer);

    return 0;
}