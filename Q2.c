#include <stdio.h>
int main()
{
    int first=
    printf("Enter the First Number %d",first);
    scanf("%d",&first);
    
    int second=
    printf("Enter the Second Number %d",second);
    scanf("%d",&second);
    
    int sum=(first+second);
    int dif=(first-second);
    int prod=(first*second);
    int quo=((float)first/second);
    
    
    printf("The sum is %d",sum);
    printf("The difference is %d",dif);
    printf("The product is %d",prod);
    printf("The quotient is %d",quo);
    
    return 0;
}