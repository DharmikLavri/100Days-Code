//Q42: Write a program to check if a number is a perfect number.
//
///*
//Sample Test Cases:
//Input 1:
//6
//Output 1:
//Perfect number
//
//Input 2:
//10
//Output 2:
//Not perfect number
//
//*/

#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");

    return 0;
}