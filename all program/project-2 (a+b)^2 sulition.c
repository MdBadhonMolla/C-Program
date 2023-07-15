#include<stdio.h>

int main(){

int a,b,c,d;
char h= 94 ;
printf("Mathmatical tram,  (a+b)%c2 = a%c2 + 2ab + b%c2\n",h,h,h);
printf("\n-----------------------------\n");
printf("Input The Value\n\n");
printf("a = ");
scanf("%d",&a);
printf("b = ");
scanf("%d",&b);

c=a*b;
d=2*c;
int aa=a*a;
int bb=b*b;
int e=aa+d+bb;

//ans this tram __
printf("\n\n\n");
printf("Ans :\n");
printf("    (a+b)%c2 = a%c2 + 2ab + b%c2\n",h,h,h);
printf("             = (%d)%c2 + 2x%dx%d + (%d)%c2\n",a,h,a,b,b,h);
printf("             = (%d)%c2 + 2(%d) + (%d)%c2\n",a,h,c,b,h);
printf("             = (%d) + 2(%d) + (%d)\n",aa,c,bb);
printf("             = (%d) + (%d) + (%d)\n",aa,d,bb);
printf("             = (%d)\n",e);


//printf("ans : %d",g);

}
