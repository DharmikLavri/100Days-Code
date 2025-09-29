#include <stdio.h>
int main()
{
    int first=
    printf("Enter the First Number %d",first);
    scanf("%d",&first);
    
    int second=
    printf("Enter the Second Number %d",second);
    scanf("%d",&second);
    
    int third=(first);
    first=(second);
    second=(third);
    
    printf("First Number is %d",first);
    printf("Second Number is %d",second);
    return 0;
}