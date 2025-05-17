#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("harleen kaur\n");
    
    int n;
    float x, u, y;

    printf("Enter the Number of terms: ");
    scanf("%d", &n);

    float arr[n][n + 1];

    printf("\nEnter the values of x: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i][0]);  
    }

    printf("\nEnter the values of y: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i][1]);  
    }

    printf("\nEnter the value of x for which you want y: ");
    scanf("%f", &x);

    for (int j = 2; j < n + 1; j++) {
        for (int i = n - 1; i >= j - 1; i--) {
            arr[i][j] = arr[i][j - 1] - arr[i - 1][j - 1];
        }
    }

    printf("\nBACKWARD DIFFERENCE TABLE\n\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + 1 - i; j++) {
            printf("%0.2f\t", arr[i][j]);
        }
        printf("\n");
    }

    u = (x - arr[n - 1][0]) / (arr[1][0] - arr[0][0]);
    
    y = arr[n - 1][1];

    for (int i = 2; i <= n; i++) {
        y += (u * arr[n - 1][i]) / (i - 1);
        u *= (u + (i - 1));
    }

    printf("\nWhen x = %0.2f, corresponding y = %0.2f\n", x, y);
    return 0;
}
