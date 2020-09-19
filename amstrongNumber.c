#include<stdio.h>
#include <math.h>
int main(){
    int number,remainder,count=0,result=0,originalNumber;
    printf("Enter a number\n");
    scanf("%d",&number);
    originalNumber = number;
    while ((originalNumber!=0))
    {
        originalNumber/=10;
        ++count;
    }
    originalNumber = number;
    while(originalNumber!=0){
     remainder= originalNumber%10;
      result+=pow(remainder,count);
    }
    (result==number)?printf("Number %d is amstrong number",number):printf("Number %d is not amstrong number",number);
    return 0;
}