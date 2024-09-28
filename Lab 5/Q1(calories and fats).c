#include <stdio.h>

int main() {
    float total, grams, calories_fat, percentage_fat_fat;
    printf("Enter the total number of calories (greater than or equal to zero): ");
    scanf("%f", &total);
    printf("Enter the number of fat grams (greater than or equal to zero): ");
    scanf("%f", &grams);

        if (total_calories < 0 || fat_grams < 0) 
            printf("Error: Calories and fat grams must be >= 0. Please try again.\n");
        else{
        calories_fat = grams *9;
        percentage_fat = (calories_fat / total) * 100;

        printf("The percentage_fat of calories that come from fat is: %.2f%%\n", percentage_fat);}

    return 0;
}