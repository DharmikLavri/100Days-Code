#include<stdio.h>
int main()
{
	int per;
	printf("Enter your percentage %d",per);
	scanf("%d",&per);
	
	if (per>=95 && per<=100)
	printf("GRADE A");
	
	if (per>=80 && per<=94)
	printf("GRADE B");
	
	if (per>=70 && per<=79)
	printf("GRADE C");
	
	if (per>=51 && per<=69)
	printf("GRADE D");
	
	if (per<=50)
	printf("GRADE F");
	
	return 0;
	
}