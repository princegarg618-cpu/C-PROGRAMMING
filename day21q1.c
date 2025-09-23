#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find number of digits
    digits = (int)log10(num);

    first = num / (int)pow(10, digits); // First digit
    last = num % 10;                    // Last digit

    // Remove first and last digit from the middle part
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    // Swap: new number = last * 10^digits