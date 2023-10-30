#include<stdio.h>

void chack(int a)
{
	if(a%2==0)
	{
		printf("[%d] - Even Number\n",a);
	}else
	{
		printf("[%d] - Odd Number\n",a);
	}
}

int main()
{
	int a=5,b=0,c=8;
	chack(a);
	chack(b);
	chack(c);
}
