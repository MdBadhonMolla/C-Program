/*
****************
Name : MD Badhon Mollah
ID : 41220300558
................
*/

#include<stdio.h>

int subArraySum(int a[], int n)
{
	int sum =-99999999999;
	for(int i=0; i<n; i++)
	{
		int normal_sum=0;
		for(int j=i; j<n; j++)
		{
			normal_sum = normal_sum + a[j];
			if(normal_sum > sum){
				sum = normal_sum;
			}
		}
	}
	return sum;
}

void display(int a[], int n)
{
	printf("\n\tArray = ");
	for(int i=0; i<n; i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n\n");
}

int main()
{
	int a,x,y;
	int index;

	printf("Array size : ");scanf("%d",&a);
	y =a-1;
	int arr[y];
	for(int i=1; i<=a; i++)
	{
		index = i-1;
		printf("[%d] - Array number : ",i);scanf(" %d",&x);
		arr[index]=x;
	}
	int size = sizeof(arr) / sizeof(arr[0]);
    int maxSum = subArraySum(arr, size);
    display(arr, size);
    printf("Maximum subarray sum is: %d\n", maxSum);
    return 0;
}
