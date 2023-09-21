#include<stdio.h>

int main()
{
	int input,count=0;
	printf("Enter your phone Number :");
	scanf("%d",&input);
	int x = input;
	for(int i=1; i<=x;i++)
	{
		if(input%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("prime number");
	}else{
	printf("not prime number");
	}
}
