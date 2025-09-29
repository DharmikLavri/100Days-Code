#include <stdio.h>

void printBinary(int num) {
    unsigned int mask = 1 << (sizeof(int) * 8 - 1); // Mask to check the highest bit
    int started = 0;  // Flag to avoid printing leading zeros

    for (; mask > 0; mask >>= 1) {
        if (num & mask) {
            putchar('1');
            started = 1;
        } else if (started) {
            putchar('0');
        }
    }
    // If number is 0, print 0
    if (!started) {
        putchar('0');
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Binary representation: ");
    printBinary(num);
    printf("\n");

    return 0;
}
