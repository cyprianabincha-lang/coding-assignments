/*
Name: Cyprian Abincha 
Reg no:PA106/G/28791/25
Description: program to display personal info 
*/

#include<stdio.h> //preprocessor directive: scanf(),printf()
//main function 
int main() {
    int height;
    printf("what is your height\n");
    scanf("%d",& height);
    printf("your height is %d\n", height);
    int ID;
    printf("what's ID no.\n");
    scanf("%d",&ID);
    printf("your ID no is %d\n",ID);
    int Balance;
    printf("Enter your bank Balance\n");
    scanf("%d",& Balance);
    printf("your bank balance is %d\n", Balance);
    return 0;
}