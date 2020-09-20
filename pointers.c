#include<stdio.h>
int main(){
    int a=5;
    int *p=&a;
    printf("%d\n",a);
    // printf("%u",&a);
    // printf("%u",p);
    printf("%d\n",*p);
    // printf("%u",&p);
    return 0;
}