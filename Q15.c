#include <stdio.h>

int main() {
    char x;
    printf("Enter a character %c",x);
    scanf("%c",&x);

    if (x >= 'A' && x <= 'Z') {
        printf("It is an Uppercase Alphabet.\n");
    }
    else if (x >= 'a' && x <= 'z') {
        printf("It is a Lowercase Alphabet.\n");
    }
    else if (x >= '0' && x <= '9') {
        printf("It is a Digit.\n");
    }
    else {
        printf("It is a Special Character.\n");
    }

    return 0;
}