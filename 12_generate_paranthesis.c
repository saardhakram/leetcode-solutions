#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void backtrack(int open, int close, int n, char* current, int index, char** result, int* returnSize) {
    if (index == 2 * n) {
        current[index] = '\0';
        result[*returnSize] = strdup(current);
        (*returnSize)++;
        return;
    }

    if (open < n) {
        current[index] = '(';
        backtrack(open + 1, close, n, current, index + 1, result, returnSize);
    }

    if (close < open) {
        current[index] = ')';
        backtrack(open, close + 1, n, current, index + 1, result, returnSize);
    }
}

char** generateParenthesis(int n, int* returnSize) {
    int maxCombinations = 2000;
    char** result = (char**)malloc(sizeof(char*) * maxCombinations);
    char* current = (char*)malloc(sizeof(char) * (2 * n + 1));
    
    *returnSize = 0;
    backtrack(0, 0, n, current, 0, result, returnSize);
    
    free(current);
    return result;
}

int main(void) {
    int n = 3;
    int returnSize = 0;
    
    char** combinations = generateParenthesis(n, &returnSize);

    printf("Generated Parentheses for n = %d:\n", n);
    for (int i = 0; i < returnSize; i++) {
        printf("%s\n", combinations[i]);
        free(combinations[i]); // Clean up individual string memory
    }
    free(combinations); // Clean up result array memory

    return 0;
}