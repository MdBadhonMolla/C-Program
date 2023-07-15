#include<stdio.h>
#include<windef.h>
int clear()
{
    system("cls");
}
int stop()
{
    system("pause");
}

//mail line start *****************
int main()
{
    //loop start***************************
int s=0,m=0,h=0,d=0,w=0,mo=0,y=0;

         while(1){

                printf("\t%.2d : %.2d : %.2d\n",h,m,s);
                s++;

                if(s==5)
                {
                    m++;
                    s=0;
                }
                if(m==5)
                {
                    h++;
                    m=0;

                }

                sleep(1);
                clear();
                int input;
        printf("Type 'stop' to pause the timer: ");
        scanf("%s", input);

        if (strcmp(input, "stop") == 0) {
            printf("Timer paused. Press Enter to resume...");
            getchar(); // Wait for user to press Enter
            clear();
        }


            }

}

