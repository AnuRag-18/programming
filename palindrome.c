#include<stdio.h>
int main(){
    int number,originalNumber,remainder,result=0;
    printf("Enter a number\n");
    scanf("%d",&number);
    originalNumber=number;
    while(originalNumber!=0){
       remainder=originalNumber%10;
       result=result*10+remainder;
       originalNumber/=10;
    }
    (result==number)?printf("Number entered is palindrome"):printf("Number entered is not a palindrome");
    return 0;
    
}