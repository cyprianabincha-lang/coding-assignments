/*
Name cyprian Abincha 
Reg PA106/G/28791/25
*/

#include<stdio.h>

int main(){

    int amount;
    int balance=2000;
    printf("your current balance is %d\n", balance);
    
    while(balance>0){
    printf("Entler amount to withdraw\n");
    scanf("%d", &amount);
    balance -= amount;
    printf("New balance:%d\n",balance);
    }
    
    printf("insufficient balance");





return 0;
}