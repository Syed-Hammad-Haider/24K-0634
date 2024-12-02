#include <stdio.h>
#define MAX_TEMP 50
void check_temperature(float current_temp);
int main()
{
    float current_temp;
    char user_choice;
    do
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &current_temp);
        check_temperature(current_temp);
        printf("Do you want to enter temperature again? (Y/y for yes, N/n for no): ");
        scanf(" %c", &user_choice);
    } while (user_choice == 'Y' || user_choice == 'y');

    return 0;}

void check_temperature(float current_temp)
{
    static int exceed_count = 0;
    if (current_temp > MAX_TEMP)
    {
        exceed_count++;
        printf("Temperature %.2f exceeds the maximum limit of %d.\nLimit has been exceeded %d times.\n", current_temp, MAX_TEMP, exceed_count);
    }
    else
    {
        printf("Temperature %.2f lies within the maximum limit of %d.\n", current_temp, MAX
