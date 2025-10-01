/*
Name: cyprian Abincha 
Reg:PA106/G/28791/25
*/
#include<stdio.h>

int main(){


float attendance, averagemarks;
    printf("Enter your attendance:");
    scanf("%f",& attendance);
    
    printf("Enter your average marks:");
    scanf("%f",& averagemarks);
    
    if(attendance>=75, averagemarks>=40){
    printf("Congratulations you qualify for examinations");
    
    }
    else{
    printf("Unfortunately we are unable to offer you examinations. ");
    
    }
    return 0;
}