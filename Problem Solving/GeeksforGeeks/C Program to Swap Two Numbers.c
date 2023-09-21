#include<stdio.h>

int main()
{
	int a,b;
	a=5;
	b=3;

	printf("a , b = %d , %d\n",a,b);

	int temp;

	temp=a;
	a=b;
	b=temp;

	printf("a , b = %d , %d",a,b);
}


