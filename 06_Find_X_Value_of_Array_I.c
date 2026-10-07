#include <stdio.h>
#include <stdlib.h>

long long* resultArray(int* nums, int numsSize, int k, int* returnSize) {
    long long* ans = (long long*)calloc(k, sizeof(long long));
    long long dp[5] = {0};

    *returnSize = k;

    for (int i = 0; i < numsSize; i++) {
        long long next_dp[5] = {0};
        int rem = nums[i] % k;
        next_dp[rem]++;

        for (int r = 0; r < k; r++) {
            if (dp[r] > 0) {
                next_dp[(r * rem) % k] += dp[r];
            }
        }

        for (int r = 0; r < k; r++) {
            ans[r] += next_dp[r];
            dp[r] = next_dp[r];
        }
    }

    return ans;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = 3;
    int returnSize;

    long long* result = resultArray(nums, numsSize, k, &returnSize);

    printf("Result: [");
    for (int i = 0; i < returnSize; i++) {
        printf("%lld%s", result[i], (i + 1 < returnSize) ? ", " : "");
    }
    printf("]\n");

    free(result);
    return 0;
}