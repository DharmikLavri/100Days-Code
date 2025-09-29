#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOddDigit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        // Special case if input is 0
        printf("Product of odd digits: 0\n");
        return 0;
    }

    if (num < 0) {
        num = -num;  // Make number positive to process digits
    }

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 1) {  // Check if digit is odd
            product *= digit;
            hasOddDigit = 1;
        }
        num /= 10;
    }

    if (hasOddDigit)
        printf("Product of odd digits: %d\n", product);
    else
        printf("No odd digits found in the number.\n");

    return 0;
}
