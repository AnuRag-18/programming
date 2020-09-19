#include<stdio.h>
int main(){
    int first,second,count=0,sum,num;
    printf("Enter first ,second and num");
    scanf("%d %d %d",&first,&second,&num);
    while ((count<num))
    {
        sum=first+second;
        printf("%d",sum);
        first=second;
        second=sum;
        count++;
    }
    return 0;
}