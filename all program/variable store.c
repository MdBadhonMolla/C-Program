
#include<stdio.h>
int function_1()
{
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("\n\n\n\n\n\n");
    printf("address : %d is :- %p",a,&a);
}
int function_2()
{
  int myAge = 23;
  printf("%p\n", &myAge);
  return 0;
}

int main()
{
    function_2();
    function_1();
}
