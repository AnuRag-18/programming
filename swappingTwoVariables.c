#include<stdio.h>
void swap(int * ,int *);
void main(){
   int x,y;
   printf("Enter two values");
   scanf("%d %d",&x,&y);
   swap(&x,&y);
   printf("After swapping \n x = %d\n y=%d\n",x,y);
}
void swap(int *a,int *b){
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}