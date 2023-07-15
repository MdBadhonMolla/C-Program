#include<stdio.h>

int main()
{
    int firstValue,secondValue;

    printf("\t\tSubtraction with 2 number\n\n\n");
    printf("Enter the first value : ");
    scanf("%d",&firstValue);
    printf("Enter the second value : ");
    scanf("%d",&secondValue);

    int sumation=firstValue+secondValue;

     printf("\n(%d + %d) = %d\n",firstValue,secondValue,sumation);
     int average=firstValue+secondValue;
     average/=2;

     printf("Avarage = %d\n\n\n",average);
}
