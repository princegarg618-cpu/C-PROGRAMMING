#include <stdio.h>

int main() {
    int i, j, n = 5; // top half rows
    // Top half
    for(i = 1; i <= n; i++){
        for(j = 1; j <= 2*i-1; j++)
            printf("*");
        printf("\n");
    }
    // Bottom half
    for(i = n-1; i >= 1; i--){
        for(j = 1; j <= 2*i-1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}