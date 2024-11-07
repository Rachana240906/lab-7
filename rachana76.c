#include<stdio.h>
int evenodd(int num)
{
	if(num%2==0)
	{
		printf("it is an even number");
	}
	else
	{
		printf("it is an odd number");
	}
}
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	evenodd(num);
}
