#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "1234,122342,yuer";
    const char delimiter[] = ",";
    char *token = strtok(str, delimiter);
    int index = 0;
    
    while (token != NULL) {
        printf("index %d: %lu len\n", index, strlen(token));
        token = strtok(NULL, delimiter);
        index++;
    }
    
    return 0;
}