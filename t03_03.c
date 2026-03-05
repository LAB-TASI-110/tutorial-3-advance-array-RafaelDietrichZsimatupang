#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    double values[n]; 
    double sum = 0.0;
    double max_val = -1.0/0.0;
    double min_val = 1.0/0.0;
    for (int i = 0; i < n; i++) {
        scanf("%lf", &values[i]);
        sum += values[i];
        if (values[i] > max_val) {
            max_val = values[i];
        }
        if (values[i] < min_val) {
            min_val = values[i];
        }
    }
    double average = sum / n;
    int count_above_average = 0;
    for (int i = 0; i < n; i++) {
        if (values[i] >= average) {
            count_above_average++;
        }
    }

    double range = max_val - min_val;
    printf("%.0f\n", sum); 
    printf("%.2f\n", average); 
    printf("%d\n", count_above_average);
    printf("%.0f\n", range); 

    return 0;
}
