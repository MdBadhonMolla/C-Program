#include<stdio.h>
prim(int a){
	int count = 0 ;
	for(int i = 2; i< a; i++){
		if(a%i==0){
			count= count + 1;
		}
	}
	if(count == 0){
		printf("%d, ",a);
	}
	else{
		return 1;
	}

}

int main()
{

	for(int i = 2; i<100; i++){
		prim(i);
	}
}
