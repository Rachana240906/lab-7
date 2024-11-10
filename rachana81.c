#include<stdio.h>
int prime(int n)
{
	int p=0,i=1;
	while(i<n)
	{
	if(n%i==0)
	 {
	   p++;
	 }
	 i++;
	}
	if(p==1)
	printf("1");
	else
	printf("0");
}
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	prime(n);
}
