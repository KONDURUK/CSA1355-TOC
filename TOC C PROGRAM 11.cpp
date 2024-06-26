#include <stdio.h>
#include <string.h>
int isAcceptedByDFA(const char* str) {
    int length = strlen(str);
    if (length > 0 && str[0] == 'B' && str[length - 1] == 'B') {
        return 1; // Accepted
    }

    return 0; 
}

int main() {
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);
    if (isAcceptedByDFA(inputString)) {
        printf("The string is accepted by the DFA.\n");
    } else {
        printf("The string is rejected by the DFA.\n");
    }

    return 0;
}

