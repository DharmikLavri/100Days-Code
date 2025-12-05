//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
//
///*
//Sample Test Cases:
//Input 1:
//3
//Output 1:
//Approximate sum: 1.56
//
//Input 2:
//5
//Output 2:
//Approximate sum: 2.22
//
//*/

#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    float sum = 0.0;

    for (i = 1; i <= n; i++)
    {
        int numerator = 2 * i;
        int denominator = 3 + (i - 1) * 4;

        sum += (float)numerator / denominator;
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}