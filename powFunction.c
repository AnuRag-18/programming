#include<stdio.h>
int power_1(int a,int b);
void main(){
   power_1(5,5);
}
int power_1(int base,int n){
    int p;
    for(p=1;n>0;--n){
        p = p*base;
    }
    printf("%d\n",p);
}