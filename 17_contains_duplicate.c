// 217. Contains Duplicate (Easy) · Topic: Sorting / Hashing
// https://leetcode.com/problems/contains-duplicate/
// Idea: sort, then duplicates sit next to each other.
// Time: O(n log n)   Space: O(1) extra (in-place qsort)

#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return true;
        }
    }
    return false;
}
