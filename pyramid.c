#include<stdio.h>
int main(){
    int i,rows=4;
    for(i=0;i<=rows;i++){
        for(int j =0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}