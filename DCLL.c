#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
} *head,*tail;
int breath=0,i=1;

void createList(){
struct Node *newNode;
newNode=(struct Node*)malloc(sizeof(struct Node));
printf("Enter the data");
scanf("%d",&newNode->data);    
    if(head==NULL){
        head=tail=newNode;
        head->next=head;
        head->prev=head;
    }
    else{
        tail->next=newNode;
        newNode->prev=tail;
        newNode->next=head;
        head->prev=newNode;
        tail=newNode;
    }
}

void insertAtBegining(){
struct Node *newNode;
newNode=(struct Node*)malloc(sizeof(struct Node));
printf("Enter the data");
scanf("%d",&newNode->data);
if(head==NULL){
    head=tail=newNode;
    newNode->prev=tail;
    newNode->next=head;
}
else
{
    newNode->next=head;
    head->prev=newNode;
    newNode->prev=tail;
    tail->next=newNode;
    head=newNode;
    
}
}

void insertAtEnd(){
struct Node *newNode;
newNode=(struct Node*)malloc(sizeof(struct Node));
printf("Enter the data");
scanf("%d",&newNode->data);
if(head==NULL){
    head=tail=newNode;
    newNode->prev=tail;
    newNode->next=head;
}
else
{
    newNode->prev=tail;
    tail->next=newNode;
    newNode->next=head;
    head->prev=newNode;
    tail=newNode;
    
}
}

void insertAtPosition(){
struct Node *newNode,*temp;
int position;
printf("Enter the position");
scanf("%d",&position);
temp=head;
newNode=(struct Node*)malloc(sizeof(struct Node));
printf("Enter the data");
scanf("%d",&newNode->data);
if(position<1 || position>breath+1){
    printf("Insertion invalid");
}
else{
  while ((i<position-1))
  {
    temp=temp->next;
    i++;
  }
  newNode->prev=temp;
  newNode->next=temp->next;
  temp->next->prev=newNode;
  temp->next=newNode;
}
}
void deleteFromFirst(){
    struct Node *temp;
    temp=head;
    if(head==NULL){
     printf("List is empty");
    }
    else if(head->next=head){
       head=tail=NULL;
       free(temp);
    }    
    else{
      head=head->next;
      head->prev=tail;
      tail->next=head;
      free(temp);
    }
}
void deleteFromEnd(){
    struct Node *temp;
    temp=head;
    if(head==NULL){
     printf("List is empty");
    }
    else if(head->next=head){
       head=tail=NULL;
       free(temp);
    }    
    else{
      tail=tail->prev;
      tail->next=head;
      head->prev=tail;
      free(temp);
    }
}
void deleteFromPosition(){
    int position;
    printf("Enter the position");
    scanf("%d",&position);
    struct Node*temp;
    temp=head; 
    if(position<1 || position>breath+1){
    printf("Insertion invalid");
    }
    else
    {
        while ((i<position))
        {
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        if(temp->next==head){
            tail=tail->prev;
            free(temp);
        }
        else{
            free(temp);
        }
    }
    
}
void length(){
    struct Node *temp;
    temp=head;
    while ((temp->next!=head))
    {
        breath++;
        temp=temp->next;
    }
    printf("Length of the linkedlist is : %d\n",breath+1);
}

void display(){
    struct Node *temp;
    temp=head;
    if(temp==NULL){
        printf("List is empty");
    }
    else{
        while(temp!=tail){
            printf("%d",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
}

int main(){
    int Number;
   printf("Enter Number of Nodes");
   scanf("%d",&Number);
   while (Number>0)
   {
      createList();
      Number--;
   }
//   insertAtBegining(); 
//   insertAtEnd();
//   length();
//   insertAtPosition();
  deleteFromFirst();
  display();

}
