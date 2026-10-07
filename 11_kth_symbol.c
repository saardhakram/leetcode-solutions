#include <stdio.h>

int kthGrammar(int n, int k) {
    if (n == 1) {
        return 0;
    }
    
    int mid = 1 << (n - 2);
    
    if (k <= mid) {
        return kthGrammar(n - 1, k);
    } else {
        return !kthGrammar(n - 1, k - mid);
    }
}

int main(void) {
    
    printf("n = 1, k = 1 -> %d (Expected: 0)\n", kthGrammar(1, 1));
    printf("n = 2, k = 1 -> %d (Expected: 0)\n", kthGrammar(2, 1));
    printf("n = 2, k = 2 -> %d (Expected: 1)\n", kthGrammar(2, 2));
    printf("n = 3, k = 3 -> %d (Expected: 1)\n", kthGrammar(3, 3));

    return 0;
}