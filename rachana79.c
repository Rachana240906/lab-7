#include<stdio.h>
int exchange(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("\nafter exchange a and b are %d\t%d",a,b);
}
int main()
{
	int a,b;
	printf("enter a,b");
	scanf("%d%d",&a,&b);
	printf("\nbefore exchange a=%d and b=%d",a,b);
	exchange(a,b);
}
