#include <stdio.h>
#include <string.h>

// Function to check if the given string is accepted by the DFA
int isAcceptedByDFA(const char* str) {
    int length = strlen(str);

    // Check if the string starts with 'B' and ends with 'B'
    if (length > 0 && str[0] == 'B' && str[length - 1] == 'B') {
        return 1; // Accepted
    }

    return 0; // Rejected
}

int main() {
    char inputString[100];

    // Get the input string from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Check if the string is accepted by the DFA
    if (isAcceptedByDFA(inputString)) {
        printf("The string is accepted by the DFA.\n");
    } else {
        printf("The string is rejected by the DFA.\n");
    }

    return 0;
}

