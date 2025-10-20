/*Name  Cyprian Abincha
Reg PA106/G/28791/25
*/




#include <stdio.h>

// Function prototype
float c(float f);

void main()
{
    float degree_celsius, fahrenheit;

    printf("Enter the Fahrenheit temperature:\n");
    scanf("%f", &fahrenheit);

    degree_celsius = c(fahrenheit);

    printf("The Celsius temperature is = %f\n", degree_celsius);

    return ;
}

// Function definition
float c(float f)
{
    float celsius;
    celsius = (f - 32) * 5 / 9;
    return celsius;

}
