#include<stdio.h>
#include<string.h>
void length(char ch[100])
{
	int c,c1=0,count;
	c=strlen(ch);
	if(ch[100]==' ');
	{
		c1++;
	}
	count=c-c1;
	printf("%d",count);
}
int main()
{
	char ch[100];
	int n;
	printf("enter any string");
	gets(ch);
	puts(ch);
	length(ch);
}
