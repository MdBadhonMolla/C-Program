#include<stdio.h>
int main()
{
    int a,i,j,k;

    printf("Enter haw many row you need : ");
    scanf("%d",&a);//input for user
    system("cls");//clear screen (printf,scanf)

    for(i=1;i<=a;i++)//loop
    {
        for(j=1;j<=a-i;j++)
        {
            printf("  ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("* ");
        }




        printf("\n");//new line
        sleep(1);//wate for 1 sec in sleep
        //system("cls");

    }
}
