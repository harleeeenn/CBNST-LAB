#include<stdio.h>

float langrange(float x[], float y[], int n, float xp) {
    float yp = 0;

    for(int i = 1; i <= n; i++) {
        float p = 1;
        for(int j = 1; j <= n; j++) {
            if(i != j) {
               p = p* (xp - x[j]) / (x[i] - x[j]);
            }
        }
        yp = yp + p * y[i];
    }
    return yp;
}

int main() {
    int n;

    printf("Enter the number of data point : ");
    scanf("%d", &n);

    float x[n], y[n];

    printf("Enter the data point (x and y) \n");
    for(int i = 0; i < n; i++) {
        printf("x[%d] = ",i);
        scanf("%f", &x[i]);

        printf("y[%d] = ", i);
        scanf("%f", &y[i]);
    }

    float xp;

    printf("Enter the value of x to find y : ");
    scanf("%f", &xp);

    float yp = langrange(x, y, n , xp);
    printf("The interpolation x = %.2f is y = %.4f\n", xp, yp);
    return 0;
}