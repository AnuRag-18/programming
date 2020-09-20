#include<stdio.h>

struct node1{
    int x;
    char y;
};
struct node1 a,b;
struct node {
    struct node1 a;
    struct node1 b;
};
struct node ex1,ex2;
int main(){
    ex1.a.x=2;
    ex2.b.y='r';
    printf("%d %c",ex1.a.x,ex2.b.y);
    return 0;
} 