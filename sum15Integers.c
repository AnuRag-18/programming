#include<stdio.h>
int main(){
    int a,sum=0 ;
    for(int i =0;i<5;i++){
        printf("Enter a number: ");
        scanf("%d",&a);
        if(a<=0){
            continue;
        }
        sum+=a;
    }
    printf("Sum is:%d",sum);
    return 0;
}