#include <stdio.h>
#include <math.h>

int main() {
    double trueValue = sqrt(2);

    double approxValue, absoluteError, relativeError, percentageError;

    printf("Enter the approximate value of sqrt(2): ");
    scanf("%lf", &approxValue);

    absoluteError = fabs(trueValue - approxValue);

    relativeError = absoluteError / trueValue;

    percentageError = relativeError * 100;

    printf("True Value of sqrt(2)   : %.4f\n", trueValue);
    printf("Approximate Value       : %.4f\n", approxValue);
    printf("Absolute Error          : %.4f\n", absoluteError);
    printf("Relative Error          : %.4f\n", relativeError);
    printf("Percentage Error        : %.4f%%\n", percentageError);

    return 0;
}
