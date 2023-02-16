// Created by VoidEmpty on 2023/2/14.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char password[7] = "secret";
    char userInput[81];
    printf("Input Password:");
    scanf("%s", userInput);
    if (strcmp(userInput, password) == 0)
        printf("Correct password!Welcome to the system...\n");
    else if (strcmp(userInput, password) < 0)
        printf("Invalid password! user input<password\n");
    else if (strcmp(userInput, password) > 0)
        printf("Invalid password! user input>password\n");
    return 0;
}
