/*Name: Cyprian Abincha 
Reg:PA106/G/28791/25
*/
#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0;
    float average;

    for (int i = 0; i < 7; i++) {
        printf("Enter your revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;
    printf("The total revenue is: %.2f\n", total);
    printf("The average revenue is: %.2f\n", average);

    return 0; 
}