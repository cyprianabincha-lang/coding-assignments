/*
Name: cyprian Abincha 
Reg:PA106/G/28791/25
*/
#include<stdio.h>

int main(){


float amount, units;
    printf("Enter your water units:");
    scanf("%f",& units);
    
     if(units<=30){
     amount=units*20;
     
    printf("your amount is %f", amount); 
    }
     else if(units>=31&& units<=60){
     amount=units*25;
    
    printf("your amount is %f", amount);
    }
    else if(units>60){
     amount=units*30;
     printf ("Your amount is %f", amount);
     }
    return 0;
}