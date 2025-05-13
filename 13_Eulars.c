#include <stdio.h>

float func(float x, float y) {
    return x + y;  
}

int main() {
    float x0, y0, xn, h, x, y, k;
    int n, i;
    
    printf("Enter initial values x0 and y0: ");
    scanf("%f %f", &x0, &y0);

    printf("Enter the value of x at which to find y (xn): ");
    scanf("%f", &xn);

    printf("Enter the number of steps: ");
    scanf("%d", &n);

    h = (xn - x0) / n;

    x = x0;
    y = y0;

    printf("x\t\ty\t\tslope (k)\t\ty_next\n");

    for (i = 0; i < n; i++) {
        k = func(x, y);        
        printf("%.4f\t%.4f\t%.4f\t%.4f\n", x, y, k, y + h * k);
        y = y + h * k;          
        x = x + h;              
    }
    printf("The value of y at x = %.2f is %.4f\n", xn, y);
    return 0;
}
