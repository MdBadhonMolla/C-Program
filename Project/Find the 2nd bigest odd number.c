#include<stdio.h>
//************************print************************
void ptint_array(int a[], int n)
{
	for(int k=0; k<n; k++)
	{
		printf("%d, ",a[k]);
	}
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
printf("\n\n\n\n");

//****************************Get odd*************************
int number1[size];
int j=0;
	for(int i=0; i<size; i++)
	{
		if(array[i]%2 != 0)
		{
			number1[j]=array[i];
			j++;
		}
		else{

		}
	}

	ptint_array(number1, j);
	printf("\nSecond Lergest Odd number = %d",number1[j-2]);
	printf("\n\n");
//****************************Get even*************************
int number2[size];
int k=0;
	for(int b=0; b<size; b++)
	{
		if(array[b]%2 == 0)
		{
			number2[k]=array[b];
			k++;
		}
		else{

		}
	}

	ptint_array(number2, j);
	printf("\nSecond Lergest Even number = %d",number2[k-2]);


}
