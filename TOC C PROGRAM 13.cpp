#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to simulate the DFA
bool isAcceptedByDFA(const char *str) {
    int state = 0;  // initial state
    
    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];
        
        switch (state) {
            case 0:
                if (c == 'A') {
                    state = 1;  // transition to state 1
                } else {
                    return false;  // reject if the first character is not 'A'
                }
                break;
            case 1:
                if (c == 'B') {
                    state = 2;  // transition to state 2
                } else if (c == 'A' || c == 'B') {
                    state = 1;  // stay in state 1 if it's any character (considering only 'A' and 'B')
                } else {
                    return false;  // reject if it's any other character
                }
                break;
            case 2:
                if (c == 'B') {
                    state = 2;  // stay in state 2 if it's 'B'
                } else if (c == 'A') {
                    state = 1;  // transition back to state 1 if it's 'A'
                } else {
                    return false;  // reject if it's any other character
                }
                break;
            default:
                return false;  // reject if in an invalid state
        }
    }
    
    return state == 2;  // accept if the final state is 2
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    scanf("%s", input);
    
    if (isAcceptedByDFA(input)) {
        printf("The string is accepted by the DFA.\n");
    } else {
        printf("The string is not accepted by the DFA.\n");
    }
    
    return 0;
}

