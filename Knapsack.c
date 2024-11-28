#include <stdio.h>

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to solve the 0/1 Knapsack Problem
int knapsack(int W, int wt[], int val[], int n) {
    int dp[n + 1][W + 1];

    // Build the DP table
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0; // Base case
            } else if (wt[i - 1] <= w) {
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W]; // The result is in the last cell
}

int main() {
    int n, W;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    int val[n], wt[n];
    printf("Enter the values of the items:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &val[i]);
    }

    printf("Enter the weights of the items:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &wt[i]);
    }

    printf("Enter the maximum weight of the knapsack: ");
    scanf("%d", &W);

    int result = knapsack(W, wt, val, n);
    printf("The maximum value that can be obtained is: %d\n", result);

    return 0;
}
