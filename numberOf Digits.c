#include<stdio.h>
int main(){
    int Number,count=0;
    printf("Enter number ");
    scanf("%d",&Number);
    for(int i =1;i<=Number;i*=10){
      count+=(Number-i+1);

    }
    printf("Number of digits is:%d",count);
    return 0;
}