#include <stdio.h>
int main() {
    char coffeeType;
    char cupSize;
    char manual;
    int isDouble = 0;
	 float waterTime, sugarTime, mixTime, coffeeTime, milkTime;

    printf("Welcome to the Coffee Machine!\n");
    printf("Instructions:\n");
    printf("Choose coffee type:\n");
    printf("  B for Black\n");
    printf("  W for White\n");
    printf("Enter coffee type (B for Black, W for White): ");
    scanf(" %c", &coffeeType);

    printf("Is the cup size double? (y for YES, n for NO): ");
    scanf(" %c", &cupSize);
    if (cupSize == 'y' || cupSize == 'Y') {
        isDouble = 1;
    }
    printf("Is the coffee manual? (y for YES, n for NO): ");
    scanf(" %c", &manual);

    switch (coffeeType) {
        case 'B':
        case 'b':
            waterTime = 20;
            sugarTime = 20;
            mixTime = 25;
            coffeeTime = 15;
            break;
        case 'W':
        case 'w':
		  waterTime = 15;
            sugarTime = 15;
            mixTime = 20;
            coffeeTime = 2;
            milkTime = 4;
            break;
        default:
            printf("Invalid coffee type selected.\n");
            return 1;
    }

    float totalTime = waterTime + sugarTime + mixTime + coffeeTime + milkTime;
    if (isDouble) {
        totalTime *= 1.5;
    }

    switch (coffeeType) {
        case 'B':
        case 'b':
            printf("1. Boil water (20 mins)\n");
            printf("2. Add sugar (20 mins)\n");
            printf("3. Mix (25 mins)\n");
            printf("4. Brew coffee (15 mins)\n");
            printf("5. Mix again (25 mins)\n");
            break;
        case 'W':
        case 'w':
            printf("1. Boil water (15 mins)\n");
            printf("2. Add sugar (15 mins)\n");
            printf("3. Mix (20 mins)\n");
            printf("4. Brew coffee (2 mins)\n");
            printf("5. Add milk (4 mins)\n");
            printf("6. Mix again (20 mins)\n");
            break;
    }

    printf("Total brewing time: %.2f minutes\n", totalTime);
    return 0;
}
    
						                                 
															   
															   
															                       
															   
															   
															   
															   