#include <stdio.h>

int maximumWealth(int accounts[][3], int accountsSize, int accountsColSize) {
    int maxWealth = 0;

    for (int i = 0; i < accountsSize; i++) {
        int currentWealth = 0;
        for (int j = 0; j < accountsColSize; j++) {
            currentWealth += accounts[i][j];
        }
        if (currentWealth > maxWealth) {
            maxWealth = currentWealth;
        }
    }

    return maxWealth;
}

int main(void) {
    // Example test case: 2 customers, 3 bank accounts each
    int accounts[2][3] = {
        {1, 2, 3},
        {3, 2, 1}
    };
    int rows = 2;
    int cols = 3;

    int result = maximumWealth(accounts, rows, cols);
    printf("Richest Customer Wealth: %d\n", result);

    return 0;
}