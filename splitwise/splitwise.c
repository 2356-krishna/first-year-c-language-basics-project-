#include <stdio.h>

int main() {
    int n, i;
    float amount[50], total = 0, equalShare, balance[50];

    printf("Enter number of friends: ");
    scanf("%d", &n);

    printf("\nEnter amount paid by each friend:\n");
    for(i = 0; i < n; i++) {
        printf("Friend %d: ", i + 1);
        scanf("%f", &amount[i]);
        total += amount[i];
    }

    equalShare = total / n;

    printf("\n--- Splitwise Summary ---\n");
    printf("Total Expense: %.2f\n", total);
    printf("Each Person Should Pay: %.2f\n\n", equalShare);

    for(i = 0; i < n; i++) {
        balance[i] = amount[i] - equalShare;
        if(balance[i] > 0)
            printf("Friend %d will GET %.2f\n", i + 1, balance[i]);
        else if(balance[i] < 0)
            printf("Friend %d will PAY %.2f\n", i + 1, -balance[i]);
        else
            printf("Friend %d is settled.\n", i + 1);
    }

    return 0;
}
