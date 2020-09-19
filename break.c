#include<stdio.h>
int main(){
    int a ;
    for(int i =0;i<5;i++){
        printf("Enter a number");
        scanf("%d",&a);
        if(a<=0){
            break;
        }
    }
    return 0;

}
