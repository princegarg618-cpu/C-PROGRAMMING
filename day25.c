#include <stdio.h>

int main() {
    int i, j, n = 5; // 5 rows
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}