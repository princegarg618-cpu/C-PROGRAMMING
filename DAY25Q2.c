#include <stdio.h>

int main() {
    int i, j, n = 5; // 5 rows
    for (i = n; i >= 1; i--) { // starting point for each row
        for (j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}