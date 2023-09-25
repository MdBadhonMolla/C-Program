#include<stdio.h>



//**************Find lowest value*******************
int lowValue(int a[],int n)
{
	int lowest =a[0];
	for(int i=1; i<n; i++)
	{
		int value =a[i];


		if(lowest>value)
		{
			lowest=value;
		}
		else{
			continue;
		}
	}
    printf("\n\n\n\n%d",lowest);
}






int main()
{
	int size;

	printf("Insart array size : ");
	scanf("%d",&size);
	int array[size];
	int input=0;
	printf("Haw many space in the array : %dbyte\n\n",sizeof(array));
	for(int j=0; j<size; j++)
	{
		printf("Insart the value [%d] : ",j+1);
		scanf("%d",&input);
		array[j]=input;

	}
lowValue(array,size);

}

