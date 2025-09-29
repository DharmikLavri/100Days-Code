// Q14 (Conditional Statements)
// 📋
// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character :");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("Vowel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
}