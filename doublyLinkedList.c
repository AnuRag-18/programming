#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head,*temp,*newNode,*tail;
int length=0,i=1,position;
void createDLL(){
    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    newNode->prev=NULL;
    if(head==NULL){
        head=tail=newNode;
    }
    else{
        
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }

}
void traversal(){
    temp=head;
    while(temp!=NULL){
       printf("%d",temp->data);
       temp=temp->next;
    }
}

void insertAtbegining(){
  newNode=(struct Node*)malloc(sizeof(struct Node));
  printf("Enter the data");
  scanf("%d",&newNode->data);
  newNode->next=NULL;
  newNode->prev=NULL;
  
  head->prev=newNode;
  newNode->next=head;
  head=newNode;
}
void insertAtEnd(){
  newNode=(struct Node*)malloc(sizeof(struct Node));
  printf("Enter the data");
  scanf("%d",&newNode->data);
  newNode->next=NULL;
  newNode->prev=NULL;

  tail->next=newNode;
  newNode->prev=tail;
  tail=newNode;


}
void insertAtPosition(){
  newNode=(struct Node*)malloc(sizeof(struct Node));  
  printf("Enter the position");
  scanf("%d",&position);
  if(position>length){
      printf("insertion is not valid");
  }
  else
  { 
    while (i<position-1){
      temp=temp->next;
      i++;
    }
    printf("Enter the data");
    scanf("%d",&newNode->data);
    newNode->prev=temp;
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->next->prev=newNode;
  }
}
void deleteFromBegining(){
    if(head==NULL){
        printf("List is empty");
    }
    else{
        temp=head;
        head=head->next;
        head->prev=NULL;
        
    }
    free(temp);
}
void deleteFromEnd(){
    if(tail==NULL){
        printf("Delete not possible");
    }
    else{
        temp=tail;
        tail->prev->next=NULL;
        tail=tail->prev;
    }
    free(temp);
}
void deleteFromPosition(){
    printf("Enter a position");
    scanf("%d",&position);
    if(position>length){
        printf("Delete not possible");
    }
    else
    {
        while(i<position-1){
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
    }
    free(temp);
}
void reverse(){
    struct Node *current,*nextNode;
    current=head;
    while(current!=NULL){
        nextNode=current->next;
        current->next=current->prev;
        current->prev=nextNode;
        current=nextNode;
    }
    current=head;
    head=tail;
    tail=head;
    
    
}
void lengthOfDLL(){
    temp=head;
    while (temp!=NULL)
    {
        length++;
        temp=temp->next;
    }
    printf("Length of Doubly LinkedList is :%d",length);
}
int main(){
    int N;
    printf("Enter number of Nodes in LinkedList");
    scanf("%d",&N);
    while(N>0){
        createDLL();
        N-=1;
    }
    // insertAtbegining();
    // insertAtEnd();
    // lengthOfDLL();
    // insertAtPosition();
    // deleteFromBegining();
    // deleteFromEnd();
    // deleteFromPosition;
    reverse();
    traversal();
    
    return 0;
}