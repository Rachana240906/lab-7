#include<stdio.h>
int factorial(int n)
{
	int f=1,i;
	for(i=n;i>=1;i--)
	{
		f=i*f;
	}
}
int main()
{
	int n,r,p,q,s;
	float nCr;
	printf("enter n and r");
	scanf("%d%d",&n,&r);
	p=factorial(r);
	q=factorial(n-r);
	s=factorial(n);
	nCr=s/(p*q);
	printf("nCr=%f",nCr);
}
