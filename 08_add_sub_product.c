#include <stdio.h>

int subtractProductAndSum(int n) {
    int product = 1;
    int sum = 0;
    
    while (n > 0) {
        int digit = n % 10;
        product *= digit;
        sum += digit;
        n /= 10;
    }
    
    return product - sum;
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    int result = subtractProductAndSum(n);
    printf("Result: %d\n", result);
    
    return 0;
}