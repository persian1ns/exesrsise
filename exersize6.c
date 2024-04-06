#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10; // تعداد اعداد تصادفی
    int numbers[n]; // آرایه‌ای برای ذخیره‌ی اعداد تصادفی
    int smallest, largest; // کوچکترین و بزرگترین عدد

    // تولید اعداد تصادفی
    for (int i = 0; i < n; i++) {
        numbers[i] = rand() % 100; // اعداد تصادفی بین 0 تا 99
    }

    // پیدا کردن کوچکترین و بزرگترین عدد
    smallest = largest = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("random numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\nsmullest number: %d\nlargest number: %d\n", smallest, largest);

    return 0;
}
