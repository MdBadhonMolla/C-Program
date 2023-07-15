#include<stdio.h>
int main()
{
    int i,j;
    char line[100];
    printf("wright down number or string : ");
    gets(line);
    for(i=0;line[i]!='\0';++i)
    {
        while(!((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z') || line[i]=='\0'))
        {
            for(j=i;line[j];++j)
            {
                line[j]==line[j+1];
            }
            line[j]='\0';
        }
    }
    printf("output string is : ");
    puts(line);
}
