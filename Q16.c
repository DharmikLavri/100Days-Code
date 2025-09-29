#include<stdio.h>
int main()
{
    int first;
    printf("Enter the First Number %d",first);
    scanf("%d",&first);
    
    int second;
    printf("Enter the Second Number %d",second);
    scanf("%d",&second);
    
    int third;
    printf("Enter the Third Number %d",third);
    scanf("%d",&third);
    
    if (first>second && first>third)
        {printf("The Greatest Number is %d", first);}
        
    else if (second>first && second>third)
        {printf("The Greatest Number is %d", second);}
        
    else if (third>second && third>first)
        {printf("The Greatest Number is %d", third);}
        
    
    return 0;
}