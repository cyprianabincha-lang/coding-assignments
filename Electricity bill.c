/*Name;Cyprian Abincha
Reg:PA106/G/28791/25
*/

#include <stdio.h>

// Function prototype
float calculateBill(int units);

void main() {
    int units;
    float total;

    // Input from user
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    // Function call
    total = calculateBill(units);

    // Output result
    printf("Total electricity bill: %.2f\n", total);

    return ;
}

// Function definition
float calculateBill(int units) {
    float bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;

}
