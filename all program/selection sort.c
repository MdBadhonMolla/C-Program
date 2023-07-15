#include<stdio.h>

int printArray(int a[], int n)
{
	printf("Array : ");
	for(int i=0; i<n; i++){
		printf("%d, ",a[i]);
	}
	printf("\n");
};


void selection(int arr[], int n){
for(int i=0; i<n; i++){
for(int j=i+1; j<n; j++){
	if(arr[i]>arr[j]){
		int min= j;
			if(j != 0){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
}
}
}
}
};

int main()
{

	int arr[]={5,-4,-3,5,7,8,1,9,5};
	int n= sizeof arr/sizeof arr[0];
	printf("Array size : %d\n",n);
	printArray(arr, n);
	selection(arr, n);
    printArray(arr, n);
}

