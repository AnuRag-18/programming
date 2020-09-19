#include<stdio.h>
int main(){
  int n,i,flag = 0;
  printf("Enter a Number");
  scanf("%d",&n);
  for(i =2;i<=n/2;i++){
     if(n%i!=0){
         flag = 1;
         break;
     }
  }
  if(flag==1){
      printf("%d is prime Number ",n);
  }
  else{
       printf("%d is not prime Number ",n);
  }
}