#include<stdio.h>
int main()
{
	int age;
	printf("enter the age: ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("you are eligible to vote\n");
	}
	else if("age>0" && age<18)
	{
		printf("you are eligible to vote after %d",18-age);
	}
	else if (age<=0)
	{
		printf("enter a valid input");
	}
	else
	{
		printf("enter valid input");
	}
}
