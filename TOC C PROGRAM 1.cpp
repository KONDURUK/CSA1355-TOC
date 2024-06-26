#include <stdio.h>
#include <string.h>
typedef enum {
    START,
    A_START,
    A_END,
    INVALID
} State;
int isAcceptedByDFA(const char *str) {
    State currentState = START;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        char c = str[i];

        switch (currentState) {
            case START:
                if (c == 'A') {
                    currentState = A_START;
                } else {
                    currentState = INVALID;
                }
                break;

            case A_START:
                if (c == 'A') {
                    currentState = A_END;
                } else {
                    currentState = A_START;
                }
                break;

            case A_END:
                if (c == 'A') {
                    currentState = A_END;
                } else {
                    currentState = A_START;
                }
                break;

            case INVALID:
                return 0;
        }
    }

    return currentState == A_END;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isAcceptedByDFA(str)) {
        printf("The string '%s' is accepted by the DFA.\n", str);
    } else {
        printf("The string '%s' is not accepted by the DFA.\n", str);
    }

    return 0;
}

