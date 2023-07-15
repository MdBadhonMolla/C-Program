#include<stdio.h>

int main()
{
	int i,j,k,array[11]={2,5,7,3,5,9,6,4,1,10,15};
	int blank1, blank2;


for(k=0;k<11;k++){

        for(j=k+1;j<11;j++){
                blank1=array[k];

            if(array[k]>=array[j]){

                array[k]=array[j];
                array[j]=blank1;
            }
        }
}
for(i=0; i<11; i++){

printf("%d, ",array[i]);




}


}

