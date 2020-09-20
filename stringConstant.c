#include<stdio.h>
int main()
{
  char a[6]="world";
  int i,j;
  for(int i =0,j=5;i<j;a[i++]=a[j--]);
  printf("%s\n",a);
  return 0;
}