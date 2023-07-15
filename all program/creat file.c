#include <stdio.h>


int main()
{

    int a,b,c=20;
    //printf("input any number : ");
    //scanf("%d",&c);
    for(a=0;a<c;a++)
    {
        for(b=0;b<c*5;b++)
        {
            if(a==0||a==c-1)
            {
                printf("-");
            }
            else if(b==5*c-1||b==0)
            {
                printf("|");
            }
            else{printf(" ");}
            int i,j,k;
            for(i=1;i<15;i++)
            {
                printf("8");
            }
        }
        printf("\n");
    }


}
