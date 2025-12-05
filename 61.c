// Q61: Search for an element in an array using linear search.
//
///*
// Sample Test Cases:
// Input 1:
// 5
// 1 2 3 4 5
// 3
// Output 1:
// Found at index 2
//
// Input 2:
// 4
// 10 20 30 40
// 25
// Output 2:
//-1
//
//*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int num[n], i;

    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    int s;
    printf("Enter the elements you wanna search:");
    scanf("%d", &s);

    for (i = 0; i < n; i++)
    {
        if (num[i] == s)
        {
            printf("Found the number at index %d\n", i);
        }
    }

    return 0;
}