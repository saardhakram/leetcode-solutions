#include <stdio.h>
#include <stdlib.h>

int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes) {
    int m = matSize;
    int n = matColSize[0];

    if (m * n != r * c) {
        *returnSize = m;
        *returnColumnSizes = (int*)malloc(m * sizeof(int));
        for (int i = 0; i < m; i++) {
            (*returnColumnSizes)[i] = n;
        }
        return mat;
    }

    int** result = (int**)malloc(r * sizeof(int*));
    *returnColumnSizes = (int*)malloc(r * sizeof(int));
    *returnSize = r;

    for (int i = 0; i < r; i++) {
        result[i] = (int*)malloc(c * sizeof(int));
        (*returnColumnSizes)[i] = c;
    }

    for (int i = 0; i < m * n; i++) {
        result[i / c][i % c] = mat[i / n][i % n];
    }

    return result;
}

int main() {
    int m = 2, n = 2;
    int r = 1, c = 4;

    int* matColSize = (int*)malloc(m * sizeof(int));
    int** mat = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        matColSize[i] = n;
        mat[i] = (int*)malloc(n * sizeof(int));
    }

    mat[0][0] = 1; mat[0][1] = 2;
    mat[1][0] = 3; mat[1][1] = 4;

    int returnSize;
    int* returnColumnSizes;

    int** reshapedMat = matrixReshape(mat, m, matColSize, r, c, &returnSize, &returnColumnSizes);

    printf("Reshaped Matrix:\n");
    for (int i = 0; i < returnSize; i++) {
        for (int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d ", reshapedMat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < returnSize; i++) {
        free(reshapedMat[i]);
    }
    free(reshapedMat);
    free(returnColumnSizes);

    if (reshapedMat != mat) {
        for (int i = 0; i < m; i++) {
            free(mat[i]);
        }
        free(mat);
    }
    free(matColSize);

    return 0;
}
