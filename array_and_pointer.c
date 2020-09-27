#include<stdio.h>
int main(){
    int a[5],i;
    int *q=a;
    for(i=0;i<5;i++){
        // scanf("%d",&a[i]);
        // scanf("%d",(a+i));
        scanf("%d",(q+i));
        
    }
    for(i=0;i<5;i++){
        // printf("%d",a[i]);
        // printf("%d",i[a]);
        // printf("%d",i[q]);
        // printf("%d",*(a+i));
        printf("%d",*(q+i));

    }
  return 0;
}