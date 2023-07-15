#include<stdio.h>

void insartion_sort(int x[], int y)
{
    int i, j, temp;
    for(i = 1; i < y; i++)
    {
        temp = x[i];
        j= i-1;
        while(j>=0 && x[j]>temp)
        {
            x[j+1] = x[j];
            j= j-1;
        }
        x[j+1]=temp;
    }
}


int main()
{
    int array[]={21,56,-2,1,-6,5,78,35};
    int n, a, arr;
    n = sizeof array/sizeof array[0];



    printf("Before the array : ");
    for(a = 0; a < n; a++){
        printf("%d, ",array[a]);
    }
    insartion_sort(array, n);

    printf("\n\nSorted array: ");
    for(int a = 0; a < n; a++) {
        printf("%d ", array[a]);
    }



}
