// Q55: Write a program to print all the prime numbers from 1 to n.
//
///*
// Sample Test Cases:
// Input 1:
// 10
// Output 1:
// 2 3 5 7
//
// Input 2:
// 20
// Output 2:
// 2 3 5 7 11 13 17 19
//
//*/

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a Number:");
    scanf("%d", &n);
    if (n >= 1)
    {
        if (n == 2)
            printf("2");
        else
        {

            printf("2,3,");
            for (i = 4; i <= n; i++)
            {
                if (i % 2 != 0)
                {
                    if (i % 3 != 0)
                    {
                        printf("%d,", i);
                    }
                }
            }
        }
    }
    return 0;
}