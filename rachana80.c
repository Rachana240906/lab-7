#include<stdio.h>
int fibonacci(int n)
{
	int sum,a=0,b=1;
	while(n!=0)
	{
	sum=a+b;
	a=b;
	b=sum;
	printf("%d\t",sum);
	n--;
	}
}
int main()
{
	int n,num;
	printf("enter a number");
	scanf("%d",&num);
	n=num-2;
	printf("0\t1\t");
	fibonacci(n);
}
