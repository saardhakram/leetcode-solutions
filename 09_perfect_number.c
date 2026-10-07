#include <stdio.h>
#include <stdbool.h>

bool checkPerfectNumber(int n) {
    if (n <= 1) return false;
    
    int s = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            s += i;
            if (i * i != n) {
                s += n / i;
            }
        }
    }
    return s == n;
}

int main(void) {
    int n;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("%d is %sperfect\n", n, checkPerfectNumber(n) ? "" : "not ");
    return 0;
}