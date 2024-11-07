#include<stdio.h>
char vowel(char ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("it is an vowel");
	}
	else
	{
		printf("it is not an vowel");
	}
}
int main()
{
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	vowel(ch);
}
