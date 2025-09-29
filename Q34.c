//Q34: Write a program to check if a number is prime.
//
///*
//Sample Test Cases:
//Input 1:
//7
//Output 1:
//Prime
//
//Input 2:
//10
//Output 2:
//Not prime
//
//*/


#include <stdio.h>

int main() 
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("Not prime\n");
        return 0;
    }

    for (i = 2; i < num; i++) 
    {
        if (num % i == 0) {
            printf("Not prime\n");
            return 0;
        }
    }
    printf("Prime\n");
    return 0;
}