#include<stdio.h>
#include<math.h>
void comint(float a, float b, float c)
{
	float sum = 0;

	sum=a*((pow((1+b/100),c)));
	sum = sum - a;

	printf("%.3f",sum);
}

int main()
{
	int a=10000, b=5, c=2;
	comint(a,b,c);
}
