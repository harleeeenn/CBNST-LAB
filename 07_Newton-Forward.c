// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// #include<stdlib.h>

// int main(){
//     int n, fact = 1;
//     float x, u, y, newU;
    
//     printf("Enter the Number of terms: ");
//     scanf("%d",&n);

//     float arr[n][n+1];

//     printf("\n Enter the Value's of x : ");
//     for(int i = 0; i < n; i++){
//         scanf("%f", &arr[i][0]);
//     }

//     printf("\n Enter the value's of y : ");
//     for(int i = 0; i < n; i++){
//         scanf("%f", &arr[i][i]);
//     }

//     printf("\nEnter the value of x for which you want y : ");
//     scanf("%f", &x);

//     for(int j = 2; j < n + 1; j++){
//         for(int i = 0; i <= n - j; i++){
//             arr[i][j] = arr[i + 1][j - 1] - arr[i][j - 1];
//         }
//     }
    
//     printf("\nFORWARD DIFFERENCE TABLE\n\n");
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j = n + 1; j++){
//             printf("%0.2f\t",arr[i][j]);
//         }
//         printf("\n");
//     }
//     u = (x - arr[0][0] / (arr[1][0] - arr[0][0]));
//     newU = u;

//     y = arr[0][1];

//     for(int i = 2; i <= n; i++){
//         y = y - (newU * arr[0][i] / fact);
//         fact = fact * i;
//         newU = newU * (u - (i - 1));
//     }
//     printf("\nWhen x = %0.2f, corresponding y = %0.2f", x,y);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>

// int main(){
//     printf("Mayank Singh / 230111954 / 35 / I1\n");
//     int n, fact = 1;
//     float x, u, y, newU;

//     printf("Enter the Number of terms: ");
//     scanf("%d", &n);

//     float arr[n][n+1];

//     printf("\nEnter the values of x: ");
//     for(int i = 0; i < n; i++){
//         scanf("%f", &arr[i][0]);
//     }

//     printf("\nEnter the values of y: ");
//     for(int i = 0; i < n; i++){
//         scanf("%f", &arr[i][1]);
//     }

//     printf("\nEnter the value of x for which you want y: ");
//     scanf("%f", &x);

//     for(int j = 2; j < n + 1; j++){
//         for(int i = 0; i <= n - j; i++){
//             arr[i][j] = arr[i + 1][j - 1] - arr[i][j - 1];
//         }
//     }

//     printf("\nFORWARD DIFFERENCE TABLE\n\n");
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n + 1 - i; j++){
//             printf("%0.2f\t", arr[i][j]);
//         }
//         printf("\n");
//     }

//     u = (x - arr[0][0]) / (arr[1][0] - arr[0][0]);
//     newU = u;

//     y = arr[0][1];


//     for(int i = 2; i <= n; i++){
//         y = y + (newU * arr[0][i]) / fact;
//         fact = fact * i;
//         newU = newU * (u - (i - 1));
//     }

//     printf("\nWhen x = %0.2f, corresponding y = %0.2f", x, y);
//     return 0;
// }