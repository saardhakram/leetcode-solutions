#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        char* empty = (char*)malloc(sizeof(char));
        empty[0] = '\0';
        return empty;
    }

    char* prefix = (char*)malloc(sizeof(char) * (strlen(strs[0]) + 1));
    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (prefix[j] != '\0' && strs[i][j] != '\0' && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0';

        if (prefix[0] == '\0') {
            break;
        }
    }

    return prefix;
}

int main(void) {
    char* strs1[] = {"flower", "flow", "flight"};
    int size1 = sizeof(strs1) / sizeof(strs1[0]);
    char* result1 = longestCommonPrefix(strs1, size1);
    printf("Result 1: \"%s\"\n", result1);
    free(result1);

    char* strs2[] = {"dog", "racecar", "car"};
    int size2 = sizeof(strs2) / sizeof(strs2[0]);
    char* result2 = longestCommonPrefix(strs2, size2);
    printf("Result 2: \"%s\"\n", result2);
    free(result2);

    return 0;
}