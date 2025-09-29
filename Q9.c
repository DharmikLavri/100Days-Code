#include<stdio.h>
int main()
{
    int P=
    printf("Enter the loan amount %d",P);
    scanf("%d",&P);

    int T=
    printf("Enter the Number of Months you need loan for %d",T);
    scanf("%d",&T);
    
    int R=
    printf("Enter the Rate %d",R);
    scanf("%d",&R);

    int SI=(P*T*R/100);
    printf("Simple Interest is %d",SI);

    int CI=(P+SI);
    printf("Compound Interest is %d",CI);
    return 0;
}