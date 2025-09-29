//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
//
///*
//Sample Test Cases:
//Input 1:
//4 2 +
//Output 1:
//6
//
//Input 2:
//10 3 %
//Output 2:
//1
//
//Input 3:
//15 5 /
//Output 3:
//3
//
//*/

#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter Number one:");
	scanf("%d",&num1);
	
	printf("Enter Number two:");
	scanf("%d",&num2);
	
	char ch;
	printf("Enter Function:");
	scanf(" %c",&ch);
	
	int result;
	switch (ch)
	{
		case '+':
			result=num1+num2;
			break;	
		case '-':
			result=num1-num2;
			break;	
		case '*':
			result=num1*num2;
			break;	
		case '/':
			result=num1/num2;
			break;	
		case '%':
			result=num1%num2;
			break;	
	}
	printf("%d",result);
	return 0;
}