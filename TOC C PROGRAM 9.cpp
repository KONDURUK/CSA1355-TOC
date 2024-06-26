#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAccepted(char *str) {
    int len = strlen(str);
    if (len < 2) {
        return false;
    }

    // Check if the string starts with '1' and ends with '1'
    if (str[0] == '1' && str[len - 1] == '1') {
        return true;
    }

    return false;
}

int main() {
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    if (isAccepted(str)) {
        printf("The string is accepted by the NFA.\n");
    } else {
        printf("The string is not accepted by the NFA.\n");
    }

    return 0;
}

