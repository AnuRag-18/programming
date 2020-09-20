#include<stdio.h>
struct ex
{
   int i;
   char c;
}x,y,z;
int main(){
    x.i=1;
    x.c='a';
    printf("%d %c",x.i,x.c);
    return 0;
}
