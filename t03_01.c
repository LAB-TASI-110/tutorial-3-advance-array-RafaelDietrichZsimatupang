#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        double value; 
        scanf("%lf", &value);
        sum += value;
    }

    double average = sum / n;
    printf("%.0f\n", sum);
    printf("%.2f\n", average);

    return 0;
}
