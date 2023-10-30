#include<stdio.h>

void rectangle(float a, float b)
{
	float ra = 0;
	ra = 2*(a+b);

	printf("%.2f",ra);
}

int main()
{
	float l=10, w=20;

	rectangle(l,w);

}
