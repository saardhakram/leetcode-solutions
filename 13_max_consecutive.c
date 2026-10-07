#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int maxCount = 0;
    int currentCount = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            currentCount++;
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
        } else {
            currentCount = 0;
        }
    }

    return maxCount;
}

int main(void) {
    int nums[] = {1, 1, 0, 1, 1, 1};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = findMaxConsecutiveOnes(nums, size);
    printf("Max Consecutive Ones: %d\n", result);

    return 0;
}