#include <stdio.h>

int main() {
    char inputString[100];  // Assuming a maximum length of 99 characters for the string
    
    printf("Enter a string: ");
    scanf("%s", inputString);  // Note: %s is used to read a string
    
    // Check if the inputString is "Hello"
    if (strcmp(inputString, "Hello") == 0) {
        printf("You entered: Hello!\n");
    } else {
        printf("You entered: %s\n", inputString);
    }

    return 0;
}
