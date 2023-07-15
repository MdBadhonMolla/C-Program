#include<stdio.h>
int main (){

int input;
printf("Input a Year : ");
scanf("%d",&input);
int a= 4/input;
int b= 100/input;
int c= 400/input;

if( a==0 && b!=0 || c==0 ){
    printf("\n\tThis Year is a Leap year\n\n\n\n\n\n");
}
else{
    printf("\n\tThis Year is not a Leap year\n\n\n\n\n\n");
}


}
