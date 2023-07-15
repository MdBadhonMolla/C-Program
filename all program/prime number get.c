#include<stdio.h>


int main()
{
    int i,j,k,a;
    int array[100];
    for(i=0; i<=12; i++)
    {
        array[i]=i+1;
        printf("%d, ",array[i]);

    }
    for(i=0;i<5;i++)
        {
            for(j=1;j<=array[i];j++)
            {
                    printf("%d, ",j);
                if(array[i]%j==0)
                {
                    a++;
                }
            }
            printf("<print a : %d>\n",a);
        if(a<=2)
        printf("The prime number %d = %d\n",i,array[i]);

        a=0;
        }
}
