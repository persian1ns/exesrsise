#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n = 10; // تعداد اعداد تصادفی
    int numbers[n]; // آرایه‌ای برای ذخیره‌ی اعداد تصادفی
    int sum = 0;
    double mean;  
    double variance = 0; 
    double standard_deviation; 

    
    for (int i = 0; i < n; i++) {
        numbers[i] = rand() % 100; 
        sum += numbers[i];
    }

    
    mean = (double)sum / n;

    
    for (int i = 0; i < n; i++) {
        variance += pow(numbers[i] - mean, 2);
    }
    variance /= n;

    
    standard_deviation = sqrt(variance);

    printf(" random numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n average: %.2lf\nvariance: %.2lf\nstandard deviation: %.2lf\n", mean, variance, standard_deviation);

    return 0;
}
