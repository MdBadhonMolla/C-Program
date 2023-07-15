#include<stdio.h>
int main()
{

     int a=20;
    int *address = &a;
     printf("\nans : %x",address);
     printf("\nans : %p",address);
     printf("\nans : %d",*address);
     printf("\nans : %x",*address);
     printf("\nans : %p",&a);


}
