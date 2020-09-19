#include<stdio.h>
int main(){
    int weekday;
    printf("Enter a weekday");
    scanf("%d",&weekday);
    switch ((weekday))
    {
    case 0:printf("Monday");
        break;
    case 1:printf("Tuesday\n");
        break;
    case 2:printf("Wednesday");
        break;
    case 3:printf("Thrusday");
        break;
    case 4:printf("Friday");
        break;
    case 5:printf("Saturday");
        break;
    case 6:printf("Sunday");
        break;            
    default:
        printf("Enter a valid input");
    }
}