#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;
    printf("Enter the true value (x): ");
    scanf("%lf", &x);

    printf("Enter the number of approximate values: ");
    scanf("%d", &n);

    double approxValues[n];

    printf("Enter the approximate values:\n");
    for (int i = 0; i < n; i++) {
        printf("Value %d: ", i + 1);
        scanf("%lf", &approxValues[i]);
    }

    double minDiff = fabs(x - approxValues[0]);
    double closestValue = approxValues[0];

    for (int i = 1; i < n; i++) {
        double diff = fabs(x - approxValues[i]);
        if (diff < minDiff) {
            minDiff = diff;
            closestValue = approxValues[i];
        }
    }

    printf("True value: %.5f\n", x);
    printf("Closest approximate value: %.5f\n", closestValue);
    printf("Least absolute difference: %.5f\n", minDiff);

    return 0;
}
