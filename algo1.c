#include<stdio.h>>

int main()
{
	int n;
	int sum = 1;
	printf("Enter a value : ");
	scanf("%d",&n);


		for(int j=0; j<n; j++){
			sum = sum + j;
			printf(" the ans : %d*************%d\n",sum,j);
		}


	printf(" the ans : %d",sum);
}
