/*
Name: cyprian Abincha 
Reg:PA106/G/28791/25
*/
#include<stdio.h>

    int main(){
    int num;
    printf("select data bundle:\n");
    
    printf("1.100MB @ 50 kes\n");
    printf("2.500MB @ 200kes\n");
    printf("3.1GB @ 350kes\n");
    printf("4.2GB @ 600kes\n");
    
    printf("enter your choice:(1-4)");
    scanf("%d",&num);
    
    switch(num){
    case 1:
        printf("you selected 100MB.cost=50kes\n");
    break;
    
    case 2:
        printf("you selected 500MB.cost=200kes\n");
    break;
    
    case 3:
        printf("you selected 1GB.cost=350kes\n");
    break;
    
    case 4:
        printf("you selected 2GB.cost=600kes\n");
    break;
    
    default:
     printf("invalid choice");
    
    }
    

    return 0;
}