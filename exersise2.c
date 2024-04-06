#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    printf("inter your string: ");
    scanf("%s", input);

    char* token = strtok(input, ",");
    int index = 0;
    while (token != NULL) {
        printf("index %d: %s\n", index, token);
        token = strtok(NULL, ",");
        index++;
    }

    // نمایش رشته‌ی جدا شده با @
    token = strtok(input, ",");
    while (token != NULL) {
        printf("%s", token);
        token = strtok(NULL, ",");
        if (token != NULL) {
            printf("@");
        }
    }

    return 0;
}
