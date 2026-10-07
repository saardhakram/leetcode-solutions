#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Helper function to check if a number is self-dividing
bool isSelfDividing(int num) {
    int temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit == 0 || num % digit != 0) {
            return false;
        }
        temp /= 10;
    }
    return true;
}

// LeetCode core function
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int maxElements = right - left + 1;
    int* result = (int*)malloc(sizeof(int) * maxElements);
    
    *returnSize = 0;
    for (int i = left; i <= right; i++) {
        if (isSelfDividing(i)) {
            result[(*returnSize)++] = i;
        }
    }
    
    return result;
}

int main() {
    int left = 1;
    int right = 22;
    int returnSize = 0;

    // Call the function
    int* result = selfDividingNumbers(left, right, &returnSize);

    // Print the output array
    printf("Output: [");
    for (int i = 0; i < returnSize; i++) {
        printf("%d%s", result[i], (i == returnSize - 1) ? "" : ", ");
    }
    printf("]\n");

    // Free allocated memory
    free(result);

    return 0;
}