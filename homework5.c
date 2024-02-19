#include <stdio.h>
#include <string.h>

#define MAX_NAMES 5
#define MAX_NAME_LENGTH 20

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH] = {"Alice", "Bob", "Charlie"};
    char input[MAX_NAME_LENGTH];
    int i, found = 0;

    printf("Enter your name: ");
    scanf("%s", input);

    if (strcmp(input, "arastoo") == 0) {
        printf("Welcome, arastoo! You have successfully logged in.\n");
        return 0;
    }

    for (i = 0; i < MAX_NAMES; i++) {
        if (strcmp(names[i], input) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Welcome, %s! You have successfully logged in.\n", input);
    } else {
        if (i < MAX_NAMES) {
            strcpy(names[i], input);
            printf("Welcome, %s! You are a new user.\n", input);
        } else {
            printf("Sorry, the user list is full. Cannot add new user.\n");
        }
    }

    return 0;
}
