#include<stdio.h>


int function(int a)
{
	int x,y,z=0;
	x=(a-1)/4;
	y=(a-1)/100;
	z=(a-1)/400;

	int date;
	date=(a+x-y+z)%7;


	char *day_name[]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	printf("\n\n\t%d - Year First day start on [%s]",a ,(day_name[date]));
}

int main()
{
	int year;
	printf("\tGive year & get This year starting day name\n\n");
	printf("\tEnter input a Year : ");
	scanf("%d",&year);
	printf("\e[1;1H\e[2J");
	function(year);
 return 0;
}
