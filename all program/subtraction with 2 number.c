#include<stdio.h>

int main()
{
    int firstValue,secondValue;

    printf("\t\tSubtraction with 2 number\n\n\n");
    printf("Enter the first value : ");
    scanf("%d",&firstValue);
    printf("Enter the second value : ");
    scanf("%d",&secondValue);

    int subtraction=firstValue-secondValue;

     printf("\n(%d - %d) = %d\n\n\n\n",firstValue,secondValue,subtraction);
}
