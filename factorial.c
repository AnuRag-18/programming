#include<stdio.h>
int main(){
    int n,i;
    unsigned long long factorial=1;

    printf("Enter a number");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial does not exist for negative number");
    }
    else{
        for(i=2;i<=n;i++){
           factorial*=i;
        }
    }
    printf("Factorial of given number is %llu:",factorial);
}