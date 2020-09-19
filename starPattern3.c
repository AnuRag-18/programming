#include<stdio.h>
int main(){
    int rows=3;
    for(int i =1;i<=rows;i++){
      for(int j=i;j<rows;j++){
          printf(" ");
      }
      for(int k =1;k<i*2;k++){
          printf("*");
      }
      printf("\n");
    }
}

