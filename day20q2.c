#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int i;
    for (i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary number!\n");
            return 1;
        }
    }

    printf("1's Complement = %s\n", binary);
    return 0;
}


