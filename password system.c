/*
Name cyprian Abincha 
Reg PA106/G/28791/25
*/



#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    const char correctPassword[] = "1234";

    do {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, correctPassword) != 0) {
            printf("Incorrect password. Try again.\n");
        }

    } while (strcmp(password, correctPassword) != 0);

    printf("Access Granted!\n");

    return 0;
}