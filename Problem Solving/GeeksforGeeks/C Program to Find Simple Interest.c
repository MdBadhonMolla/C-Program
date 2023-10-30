#include<stdio.h>

int interest(float a, float b, float c){
	float x = (a*b*c)/100;
	printf("%.3f",x);
}


int main(){
	interest(1,2,3);
}
