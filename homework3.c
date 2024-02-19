#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "1234@1222@yuer";
    const char delimiter[] = "@";
    char *token = strtok(str, delimiter);
    int index = 0;
    
    while (token != NULL) {
        printf("index %d: %s\n", index, token);
        token = strtok(NULL, delimiter);
        index++;
    }
    
    return 0;
}