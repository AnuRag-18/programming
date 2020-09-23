#include<stdio.h>
int main(){
  int n,ans=0;
  printf("Enter Kilometers");
  scanf("%d",&n);
  if(n/5>0){
    ans+=n/5;
    n=n%5;
  }
  if(n/4>0){
    ans+=n/4;
    n=n%4;
  }
  if(n/3>0){
    ans+=n/3;
    n=n%3;
  }
  if(n/2>0){
    ans+=n/2;
    n=n%2;
  }
  if(n>0){
    ans+=n;
  }
  printf("Minimum number of kilometers is: %d",ans);
  return 0;
}