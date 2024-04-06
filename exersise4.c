#include <stdio.h>
#include <string.h>

int main() {
    char names[10][50]; // تعریف آرایه با 10 عضو
    int count = 0; // تعداد اعضا در آرایه

    printf("pleas inter the name: ");
    char input[50];
    scanf("%s", input);

    // جستجو در آرایه
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(names[i], input) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("\n");
    } else {
        strcpy(names[count], input); // اضافه کردن اسم به آرایه
        count++;
        printf("new user: %s\n", input);
    }

    return 0;
}
