#include<stdio.h>
#define N 5

int top=-1;
int stack[N];
void push(){
    int num;
    
    if(top==N-1){
        printf("overflow");
    }
    else
    {  for(int j =0;j<N;j++){
        printf("Enter the element to be pushed");
        scanf("%d",&num);
        top++;
        stack[top]=num;
      }
    }
}
void pop(){
    if(top==-1){
        printf("Underflow");
    }
    else{
        printf("poped element is:%d",stack[top]);
        top--;
    }
}
void peek(){
    if(top==-1){
        printf("Underflow");
    }
    else{
        printf("Top element is:%d",stack[top]);
    }
}
void display(){
    int i;
    for(i=N-1;i>=0;i--){
        printf("%d",stack[i]);
    }
}
int main(){
 push();
 pop();
 peek();
 display();
}