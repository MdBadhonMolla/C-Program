#include<stdio.h>

void chack(int a)
{
	if(a==0)
	{
		printf("[%d] - Zero\n",a);
	}else if(a%2==0)
	{
		printf("[%d] - Positive\n",a);
	}else
	{
		printf("[%d] - Negative\n",a);
	}
}

int main()
{
	int a=5,b=0,c=8;
	chack(a);
	chack(b);
	chack(c);
}
