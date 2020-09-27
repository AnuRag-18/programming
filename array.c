#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    char s[10];

    int b[50],size,data,position;
    printf("Enter the size of the array");
    scanf("%d",&size);
    printf("Enter elements of an array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&b[i]);
    }
    printf("Elements of the array   ");
    for(int i=0;i<size;i++){
       printf("%d",b[i]);
    }
    printf("Enter the data to be inserted");
    scanf("%d",&data);
    printf("Enter the position ");
    scanf("%d",&position);
    if(position<=0 || position>size+1){
        printf("can't insert ");
    }
    else{
        for(int j=size-1;j>=position-1;j--){
            b[j+1]=b[j];
        }
        b[position-1]=data;
        size++;
    }
    printf("Elements of the array   ");
    for(int i=0;i<size;i++){
       printf("%d",b[i]);
    }
    for(int k=size-1;k>=0;k--){
        b[k+1]=b[k];
    }
    b[0]=data;
    size++;
    printf("Elements of the array   ");
    for(int i=0;i<size;i++){
       printf("%d",b[i]);
    }

    int pos;
    printf("position to be deleted ");
    scanf("%d",&pos);
    if(pos<0||pos>size){
        printf("deletion invalid");
    }
    else{
       for(int t=pos-1;t<size-1;t++){
            b[t]=b[t+1];
        }
        size--;
    }
    printf("Elements of the array   ");
    for(int i=0;i<size;i++){
       printf("%d",b[i]);
    }
    return 0;
}