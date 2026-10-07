#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int lastNonZeroFoundAt = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[lastNonZeroFoundAt++] = nums[i];
        }
    }

    for (int i = lastNonZeroFoundAt; i < numsSize; i++) {
        nums[i] = 0;
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    moveZeroes(nums, numsSize);

    printf("Result: [");
    for (int i = 0; i < numsSize; i++) {
        printf("%d%s", nums[i], (i == numsSize - 1) ? "" : ", ");
    }
    printf("]\n");

    return 0;
}