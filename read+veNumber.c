#include<stdio.h>
int main(){
    int a;
    do{
        printf("enter a number");
        scanf("%d",&a);
    }while (a<=0);
    printf("a value:%d",a);
    return 0;
}