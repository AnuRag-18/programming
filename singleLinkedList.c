#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head,*newnode,*temp;
int i=1,pos;
// head=NULL;
int breath=0;
void createList(){
  newnode=(struct Node*)malloc(sizeof(struct Node));
   printf("Enter the data\n");
   scanf("%d",&newnode->data);
   newnode->next=0;
   if(head==NULL){
       head=temp=newnode;
   }
   else{
      temp->next=newnode;
      temp=newnode;
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
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
 
void insertAtEnd(){
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL){
       temp = temp->next;
    }
    temp->next=newnode;
}

void insertAtPosition(){
  newnode=(struct Node*)malloc(sizeof(struct Node));
  printf("Enter position");
  scanf("%d",&pos);
  if(pos>breath){
    printf("Invalid position");
  }
  else{
      temp=head;
      while(i<pos-1)
      {
        temp=temp->next;
        i++;
      }
      printf("Enter the data");
      scanf("%d",&newnode->data);
      newnode->next=temp->next;
      temp->next=newnode;
    }
}

void deleteFromBegining(){
    if(head==NULL){
        printf("List is empty");
    }
    else{
        temp=head;
        head=head->next;
        free(temp);
    }
}
void deleteFromEnd(){
    struct Node *prevNode;
    temp=head;
    while(temp->next!=NULL){
        prevNode=temp;
        temp=temp->next;
    }
    prevNode->next=NULL;
    free(temp);
}
void deleteFromPosition(){
    struct Node *nextNode;
    int i=1,position;
    printf("Enter the position");
    scanf("%d",&position);
    temp=head;
    while ((i<position-1))
    {
        temp=temp->next;
        i++;
    }
    nextNode=temp->next;
    temp->next=nextNode->next;
    free(nextNode);
}
void length(){
    
    temp=head;
    while ((temp!=NULL))
    {
        breath++;
        temp=temp->next;
    }
    printf("Length of the linkedlIst is : %d",breath);
    
}
void reverse(){
    struct Node *previousNode,*currentNode,*nextNode;
    {
        previousNode=NULL;
        currentNode=nextNode=head;
        while(nextNode!=NULL){
            nextNode=nextNode->next;
            currentNode->next=previousNode;
            previousNode=currentNode;
            currentNode=nextNode;
        };
        head=previousNode;
    };
    
}
int main(){
   int numberOfNodes;
   printf("Enter nuber of nodes in linkedList");
   scanf("%d",&numberOfNodes);
   while((numberOfNodes>0))
   {
       createList();
       numberOfNodes-=1;
   }
   
//   insertAtbegining();
//   insertAtEnd();
//   length();
//   insertAtPosition();
//   deleteFromBegining();
//   deleteFromEnd();
//   deleteFromPosition();
  reverse();
  traversal();
  
//   printf("Length of linkedList is %d",count);
  return 0;
}

