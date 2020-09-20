#include<stdio.h>
struct node{
    int i;
    char c;
    struct node *link;
} obj_1,obj_2;
int main(){
    obj_1.i=1;
    obj_1.c='a';
    obj_1.link= &obj_2;
    obj_2.i=2;
    obj_2.c='b';
    obj_2.link=NULL;
    printf("%d %c\n",obj_1.link->i,obj_1.link->c);
    printf("%d \n",obj_2.i);
    return 0;
}


