#include<stdio.h>
int armstrong(int num)
{
	int q,sum=0,cube,n;
	n=num;
	while(num!=0)
	{
	q=num%10;
	cube=q*q*q;
	sum=sum+cube;
	num=num/10;
	}
	if(sum==n)
	{
		printf("armstrong");
	}
	else
	{
		printf("not armstrong");
	}
}
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	armstrong(num);
}
