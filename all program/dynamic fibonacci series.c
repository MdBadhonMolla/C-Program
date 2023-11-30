#include<stdio.h>

int memo[100]={-1,-1,-1,-1,-1,-1,-1};

int fibonacci(int n){

    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else if(memo[n]!=-1){
        return memo[n];
    }
    else{
        memo[n]= fibonacci(n-1) + fibonacci(n-2);
    }
    return memo[n];
}

int main(){
    int n;
    printf("Enter your number : ");
    scanf("%d",&n);

    fibonacci(n);
    printf("Enter your number : %d",memo[n]);
}
