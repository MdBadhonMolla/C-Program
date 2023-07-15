// Linear search

#include<stdio.h>


int main()
{
	int inpute,i,count=0,index;

	int array[10]={1,5,7,8,9,6,4,2,3,15};

		printf("Which namber you can sarch : ");
		scanf("%d",&inpute);

	for(i=0; i<10; i++)
	{
		printf("\n%d_No index-array = %d\n",i,array[i]);
		if(array[i] == inpute)
		{
			count++;
			index= i;
		}
	}
        printf("-----------------------------------------",inpute);
	if(count >= 1)
	{
		printf("\n\n%d Number is found & Index number is %d\n\n\n",inpute,index);
	}else{ printf("\n%d Number is not found\n\n\n",inpute); }

}
