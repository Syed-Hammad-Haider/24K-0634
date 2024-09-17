#include <stdio.h>

int main() {
    float cost, discount, saved, afterDiscount;

    printf("Enter the cost of shopping: ");
    scanf("%f", &cost);

    if (cost < 500) {
    printf("Original amount: %.2f\n", cost);
    printf("Amount saved: %.2f\n", 0);
    printf("Amount after discount: %.2f\n", cost);
    }

    if (cost>=500 && cost < 2000) {
        discount = 0.05;
    } else if (cost >= 2000 && cost <= 4000) {
        discount = 0.10;
    } else if (cost > 4000 && cost <= 6000) {
        discount = 0.20;
    } else {
        discount = 0.35;
    }
    saved = cost * discount;
    afterDiscount=cost-saved;
    printf("Original amount: %.2f\n"cost);
    printf("Amount saved: %.2f\n",saved);
    printf("Amount after discount: %.2f\n",afterDiscount);
}
