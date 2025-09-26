#include<stdio.h>

int main()
{
int age;
float income;
    printf("Enter your age:");
    scanf("%d",&age);
    
    printf("Enter your income:");
    scanf("%f",&income);
    
    if(age>20, income>21000){
    printf("Congratulations you qualify for a loan");
    
    }
    else{
    printf("Unfortunately we are unable to offer you a loan at the moment. ");
    
    }
    return 0;
}