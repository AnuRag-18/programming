#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
}*head,*temp,*newNode,*tail;

int position,i=1;
int length=0;
void createCLL(){
    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data");
    scanf("%d",&newNode->data);
    // head=NULL;
    if(head==NULL){
        head=temp=newNode;
    }
    else{
       temp->next=newNode;
       temp=newNode;
    }
    temp->next=head;
}
void createCLL1(){
    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter the data");
    scanf("%d",&newNode->data);
    if(head==NULL){
        head=tail=newNode;
        // tail->next=head;
    }
    else{
       tail->next=newNode;
       tail=newNode;
    //    tail->next=head;
    }
    tail->next=head;
    printf("%d",tail->next->data);
}
void createCLLWithTail(){
   newNode=(struct Node*)malloc(sizeof(struct Node));
   printf("Enter the data");
   scanf("%d",&newNode->data);
   if(tail==NULL){
       tail=newNode;;
       tail->next=newNode;
   }
   else{
       newNode->next=tail->next;
       tail->next=newNode;
       tail=newNode;
   }
//    printf("%d",tail->next->data);
   
}
void insertAtbegining(){
    newNode =(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data");
    scanf("%d",&newNode->data);
    if(tail==NULL){
        tail=newNode;
    }
    else{
        newNode->next=tail->next;
        tail->next=newNode;
    }
    // printf("%d",tail->next->data);
}
void insertAtEnd(){
    newNode =(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data");
    scanf("%d",&newNode->data);
    if(tail==NULL){
        tail=newNode;
    }
    else{
        newNode->next=tail->next;
        tail->next=newNode;
        tail=newNode;
    }
    // printf("%d",tail->next->data);
}
void insertAtPosition(){
    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data");
    scanf("%d",&newNode->data);
    printf("Enter the position");
    scanf("%d",&position);
    temp=tail->next;
    while ((i<position-1))
    {
       temp=temp->next;
       i++;
    }
    newNode->next=temp->next;
    temp->next=newNode;  
    
    
}
void deleteAtFirst(){
    temp=tail->next;
    if(temp==NULL){
        printf("Invalid operation");
    }
    else if(temp->next==temp){
        tail=NULL;
        free(temp);
    }
    else{
        tail->next=temp->next;
        free(temp);
    }
}
void deleteAtEnd(){
    struct Node *current,*previous;
    current=tail->next;
    if(tail==NULL){
        printf("Invalid opearation");
    }
    else if(current->next==current){
        tail=NULL;
        free(current);
    }
    else
    {
        while ((current->next!=tail->next))
        {
            previous=current;
            current=current->next;
        }
        previous->next=tail->next;
        tail=previous;
        free(current);
        
    }
}
void deleteFromPosition(){
    struct Node *current,*nextNode;
    printf("Enter position");
    scanf("%d",&position);
    current=tail->next;
    if(position>length){
        printf("deleteion not possible");
    }
    else if(position==1){
        deleteAtFirst();
    }
    else{
        while ((i<position-1))
        {
            current=current->next;
            i++;
        }
       nextNode=current->next;
       current->next=nextNode->next;
       free(nextNode);  
    }
}
void reverse(){
    struct Node *previous,*current,*nextNode;
    current=tail->next;
    nextNode=current->next;
    if(tail==NULL){
        printf("List is empty");
    }
    else{
        while(current!=tail){
            previous=current;
            current=nextNode;
            nextNode=nextNode->next;
            current->next=previous;
        }
        nextNode->next=tail;
        tail=nextNode;
    }
}
void lengthOfCLL(){
    struct Node *temp;
    temp=tail->next;
    while ((temp->next!=tail->next))
    {
       length++;
        temp=temp->next;
    }
    printf("length of circular list is :%d",length+1);
}
void display(){
    temp = tail->next;
    while ((temp->next!=tail->next))
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    // do{
    //     printf("%d",temp->data);
    //     temp=temp->next;
    // }
    // while(temp!=tail->next);
}
void traverse(){
    temp=head;
    while(temp->next!=head){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
int main(){
    int Number ;
    printf("Enter the Number of Nodes");
    scanf("%d",&Number);
    while (Number>0)
    {
        // createCLL();
        // createCLL1();
        createCLLWithTail();
        Number-=1;
    }
    // traverse();
    // insertAtbegining();
    // insertAtEnd();
    // insertAtPosition();
    // deleteAtFirst();
    // lengthOfCLL();
    // deleteAtEnd();
    // deleteFromPosition();
    reverse();
    display();
    return 0;
}