#include<stdio.h>


int function(int a)
{
	int x,y,z=0;
	x=(a-1)/4;
	y=(a-1)/100;
	z=(a-1)/400;

	int date;
	date=(a+x-y+z)%7;
	return date;
}

int main()
{
	int input, givingYear=0,counter=0;
	printf("\n\tEnter a Year : ");
	scanf("%d",&input);
	printf("\n");
	givingYear = function(input);


    //for mounth***********************
    char *mounth[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November","December"};
    int size_mounth= sizeof(mounth)/sizeof(mounth[0]);

    //for day*********************
    char *day[]={"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int size_day= sizeof(day)/sizeof(day[0]);

    int *mounth_day[]={31,28,31,30,31,30,31,31,30,31,30,31};


    if ((input % 4 == 0 && input % 100 != 0) || (input % 400 == 0)) {
        mounth_day[1] = 29;
    }



	int i,j, count=0,z=0;



    printf("\tWellcome to the Calander\n");

    for(i=0; i<size_mounth; i++){
        printf("\n%s\n",mounth[i]);
    printf("---------------------------------------------------------\n");

        for(j=0; j<size_day; j++){
            printf("%s\t",day[j]);

        }printf("\n\n\n");

            for(int b=1; b<count; b++){

                printf(" \t");
                z++;
            }

            for(int a=1; a<=mounth_day[i]; a++){

					if(i==0 && givingYear>counter)
					{
						counter++;
						printf(" \t");
						z++;
						a=0;
						continue;
					}
                printf("%d\t",a);
                z++;
                if(z%7==0){
                    printf("\n\n");
                    count=0;
                    z=0;
                }count++;

            }z=0;
            printf("\n\n");




    }







}
