#include <stdio.h>
int main() {
    int P, T;
    float R, interest;
    printf("Enter principle amount (between 100 and 1,000,000 inclusive): ");
    scanf("%d", &P);
    if (P >= 100 && P <= 1000000) {
        printf("Enter rate of interest (between 5% and 10% inclusive): ");
        scanf("%f", &R);
        if (R >= 5 && R <= 10) {
            printf("Enter time period (between 1 and 10 years inclusive): ");
            scanf("%d", &T);
            if (T >= 1 && T <= 10) {
                interest = (P * R * T) / 100;
                // Print interest
                printf("Interest= %.2f\n", interest);
            } else {
                printf("Enter time period within the specified range (1 to 10 years).\n");
            }
        } else {
            printf("Enter rate of interest within the specified range (5% to 10%).\n");
        }
    } else {
        printf("Enter principle amount within the specified range (100 to 1,000,000).\n");
    }
}