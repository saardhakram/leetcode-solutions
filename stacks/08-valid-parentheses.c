#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool isValid(char* s) {
    int len = strlen(s);
    
    if (len % 2 != 0) {
        return false;
    }

    char stack[len];
    int top = -1;

    for (int i = 0; i < len; i++) {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } else {
            if (top == -1) {
                return false;
            }

            char topChar = stack[top--];

            if ((c == ')' && topChar != '(') ||
                (c == '}' && topChar != '{') ||
                (c == ']' && topChar != '[')) {
                return false;
            }
        }
    }

    return top == -1;
}

int main(void) {
    char test1[] = "()";
    char test2[] = "()[]{}";
    char test3[] = "(]";
    char test4[] = "([])";

    printf("Test 1: %s -> %s\n", test1, isValid(test1) ? "true" : "false");
    printf("Test 2: %s -> %s\n", test2, isValid(test2) ? "true" : "false");
    printf("Test 3: %s -> %s\n", test3, isValid(test3) ? "true" : "false");
    printf("Test 4: %s -> %s\n", test4, isValid(test4) ? "true" : "false");

    return 0;
}