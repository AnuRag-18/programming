#include<stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *link;
} *top=NULL,*temp,*newNode;

void push(int x){
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=x;
    newNode->link=top;
    top=newNode;
}
void pop(){
    temp=top;
    if(top==NULL){
        printf("underflow");
    }
    else{
      printf("%d",temp->data);
      top=temp->link;
      free(temp);
    }
}
void peek(){
    if(top==NULL){
        printf("underflow");
    }
    else{
        printf("%d",top->data);
    }
}
void display(){
    temp=top;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->link;
    }
}

int main(){
 push(1); 
 push(2);   
 push(3); 
 pop();
 peek();
 display();
}