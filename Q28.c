#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1;  // Use unsigned long long for larger results
    int hasEven = 0;  // To check if there are any even numbers

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (hasEven) {
        printf("Product of even numbers from 1 to %d is %llu\n", n, product);
    } else {
        printf("No even numbers in the range 1 to %d\n", n);
    }

    return 0;
}
